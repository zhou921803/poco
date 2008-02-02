//
// AbstractPreparation.cpp
//
// $Id: //poco/Main/Data/src/AbstractPreparation.cpp#1 $
//
// Library: Data
// Package: DataCore
// Module:  AbstractPreparation
//
// Copyright (c) 2006, Applied Informatics Software Engineering GmbH.
// and Contributors.
//
// Permission is hereby granted, free of charge, to any person or organization
// obtaining a copy of the software and accompanying documentation covered by
// this license (the "Software") to use, reproduce, display, distribute,
// execute, and transmit the Software, and to prepare derivative works of the
// Software, and to permit third-parties to whom the Software is furnished to
// do so, all subject to the following:
// 
// The copyright notices in the Software and this entire statement, including
// the above license grant, this restriction and the following disclaimer,
// must be included in all copies of the Software, in whole or in part, and
// all derivative works of the Software, unless such copies or derivative
// works are solely in the form of machine-executable object code generated by
// a source language processor.
// 
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE, TITLE AND NON-INFRINGEMENT. IN NO EVENT
// SHALL THE COPYRIGHT HOLDERS OR ANYONE DISTRIBUTING THE SOFTWARE BE LIABLE
// FOR ANY DAMAGES OR OTHER LIABILITY, WHETHER IN CONTRACT, TORT OR OTHERWISE,
// ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
// DEALINGS IN THE SOFTWARE.
//


#include "Poco/Data/AbstractPreparation.h"


namespace Poco {
namespace Data {


AbstractPreparation::AbstractPreparation(Poco::UInt32 length): 
	_length(length),
	_bulk(false)
{
}


AbstractPreparation::~AbstractPreparation()
{
}


void AbstractPreparation::prepare(std::size_t pos, std::vector<Poco::Int8>& val)
{
	throw NotImplementedException("std::vector preparation must be implemented.");
}


void AbstractPreparation::prepare(std::size_t pos, std::deque<Poco::Int8>& val)
{
	throw NotImplementedException("std::deque preparation must be implemented.");
}


void AbstractPreparation::prepare(std::size_t pos, std::list<Poco::Int8>& val)
{
	throw NotImplementedException("std::list preparation must be implemented.");
}


void AbstractPreparation::prepare(std::size_t pos, std::vector<Poco::UInt8>& val)
{
	throw NotImplementedException("std::vector preparation must be implemented.");
}


void AbstractPreparation::prepare(std::size_t pos, std::deque<Poco::UInt8>& val)
{
	throw NotImplementedException("std::deque preparation must be implemented.");
}


void AbstractPreparation::prepare(std::size_t pos, std::list<Poco::UInt8>& val)
{
	throw NotImplementedException("std::list preparation must be implemented.");
}


void AbstractPreparation::prepare(std::size_t pos, std::vector<Poco::Int16>& val)
{
	throw NotImplementedException("std::vector preparation must be implemented.");
}


void AbstractPreparation::prepare(std::size_t pos, std::deque<Poco::Int16>& val)
{
	throw NotImplementedException("std::deque preparation must be implemented.");
}


void AbstractPreparation::prepare(std::size_t pos, std::list<Poco::Int16>& val)
{
	throw NotImplementedException("std::list preparation must be implemented.");
}


void AbstractPreparation::prepare(std::size_t pos, std::vector<Poco::UInt16>& val)
{
	throw NotImplementedException("std::vector preparation must be implemented.");
}


void AbstractPreparation::prepare(std::size_t pos, std::deque<Poco::UInt16>& val)
{
	throw NotImplementedException("std::deque preparation must be implemented.");
}


void AbstractPreparation::prepare(std::size_t pos, std::list<Poco::UInt16>& val)
{
	throw NotImplementedException("std::list preparation must be implemented.");
}


void AbstractPreparation::prepare(std::size_t pos, std::vector<Poco::Int32>& val)
{
	throw NotImplementedException("std::vector preparation must be implemented.");
}


void AbstractPreparation::prepare(std::size_t pos, std::deque<Poco::Int32>& val)
{
	throw NotImplementedException("std::deque preparation must be implemented.");
}


void AbstractPreparation::prepare(std::size_t pos, std::list<Poco::Int32>& val)
{
	throw NotImplementedException("std::list preparation must be implemented.");
}


void AbstractPreparation::prepare(std::size_t pos, std::vector<Poco::UInt32>& val)
{
	throw NotImplementedException("std::vector preparation must be implemented.");
}


void AbstractPreparation::prepare(std::size_t pos, std::deque<Poco::UInt32>& val)
{
	throw NotImplementedException("std::deque preparation must be implemented.");
}


void AbstractPreparation::prepare(std::size_t pos, std::list<Poco::UInt32>& val)
{
	throw NotImplementedException("std::list preparation must be implemented.");
}


void AbstractPreparation::prepare(std::size_t pos, std::vector<Poco::Int64>& val)
{
	throw NotImplementedException("std::vector preparation must be implemented.");
}


void AbstractPreparation::prepare(std::size_t pos, std::deque<Poco::Int64>& val)
{
	throw NotImplementedException("std::deque preparation must be implemented.");
}


void AbstractPreparation::prepare(std::size_t pos, std::list<Poco::Int64>& val)
{
	throw NotImplementedException("std::list preparation must be implemented.");
}


void AbstractPreparation::prepare(std::size_t pos, std::vector<Poco::UInt64>& val)
{
	throw NotImplementedException("std::vector preparation must be implemented.");
}


void AbstractPreparation::prepare(std::size_t pos, std::deque<Poco::UInt64>& val)
{
	throw NotImplementedException("std::deque preparation must be implemented.");
}


void AbstractPreparation::prepare(std::size_t pos, std::list<Poco::UInt64>& val)
{
	throw NotImplementedException("std::list preparation must be implemented.");
}


#ifndef POCO_LONG_IS_64_BIT
void AbstractPreparation::prepare(std::size_t pos, std::vector<long>& val)
{
	throw NotImplementedException("std::vector preparation must be implemented.");
}


void AbstractPreparation::prepare(std::size_t pos, std::deque<long>& val)
{
	throw NotImplementedException("std::deque preparation must be implemented.");
}


void AbstractPreparation::prepare(std::size_t pos, std::list<long>& val)
{
	throw NotImplementedException("std::list preparation must be implemented.");
}
#endif


void AbstractPreparation::prepare(std::size_t pos, std::vector<bool>& val)
{
	throw NotImplementedException("std::vector preparation must be implemented.");
}


void AbstractPreparation::prepare(std::size_t pos, std::deque<bool>& val)
{
	throw NotImplementedException("std::deque preparation must be implemented.");
}


void AbstractPreparation::prepare(std::size_t pos, std::list<bool>& val)
{
	throw NotImplementedException("std::list preparation must be implemented.");
}


void AbstractPreparation::prepare(std::size_t pos, std::vector<float>& val)
{
	throw NotImplementedException("std::vector preparation must be implemented.");
}


void AbstractPreparation::prepare(std::size_t pos, std::deque<float>& val)
{
	throw NotImplementedException("std::deque preparation must be implemented.");
}


void AbstractPreparation::prepare(std::size_t pos, std::list<float>& val)
{
	throw NotImplementedException("std::list preparation must be implemented.");
}


void AbstractPreparation::prepare(std::size_t pos, std::vector<double>& val)
{
	throw NotImplementedException("std::vector preparation must be implemented.");
}


void AbstractPreparation::prepare(std::size_t pos, std::deque<double>& val)
{
	throw NotImplementedException("std::deque preparation must be implemented.");
}


void AbstractPreparation::prepare(std::size_t pos, std::list<double>& val)
{
	throw NotImplementedException("std::list preparation must be implemented.");
}


void AbstractPreparation::prepare(std::size_t pos, std::vector<char>& val)
{
	throw NotImplementedException("std::vector preparation must be implemented.");
}


void AbstractPreparation::prepare(std::size_t pos, std::deque<char>& val)
{
	throw NotImplementedException("std::deque preparation must be implemented.");
}


void AbstractPreparation::prepare(std::size_t pos, std::list<char>& val)
{
	throw NotImplementedException("std::list preparation must be implemented.");
}


void AbstractPreparation::prepare(std::size_t pos, const std::vector<std::string>& val)
{
	throw NotImplementedException("std::vector preparation must be implemented.");
}


void AbstractPreparation::prepare(std::size_t pos, const std::deque<std::string>& val)
{
	throw NotImplementedException("std::deque preparation must be implemented.");
}


void AbstractPreparation::prepare(std::size_t pos, const std::list<std::string>& val)
{
	throw NotImplementedException("std::list preparation must be implemented.");
}


void AbstractPreparation::prepare(std::size_t pos, const std::vector<BLOB>& val)
{
	throw NotImplementedException("std::vector preparation must be implemented.");
}


void AbstractPreparation::prepare(std::size_t pos, const std::deque<BLOB>& val)
{
	throw NotImplementedException("std::deque preparation must be implemented.");
}


void AbstractPreparation::prepare(std::size_t pos, const std::list<BLOB>& val)
{
	throw NotImplementedException("std::list preparation must be implemented.");
}


void AbstractPreparation::prepare(std::size_t pos, const std::vector<DateTime>& val)
{
	throw NotImplementedException("std::vector preparation must be implemented.");
}


void AbstractPreparation::prepare(std::size_t pos, const std::deque<DateTime>& val)
{
	throw NotImplementedException("std::deque preparation must be implemented.");
}


void AbstractPreparation::prepare(std::size_t pos, const std::list<DateTime>& val)
{
	throw NotImplementedException("std::list preparation must be implemented.");
}


void AbstractPreparation::prepare(std::size_t pos, const std::vector<Date>& val)
{
	throw NotImplementedException("std::vector preparation must be implemented.");
}


void AbstractPreparation::prepare(std::size_t pos, const std::deque<Date>& val)
{
	throw NotImplementedException("std::deque preparation must be implemented.");
}


void AbstractPreparation::prepare(std::size_t pos, const std::list<Date>& val)
{
	throw NotImplementedException("std::list preparation must be implemented.");
}


void AbstractPreparation::prepare(std::size_t pos, const std::vector<Time>& val)
{
	throw NotImplementedException("std::vector preparation must be implemented.");
}


void AbstractPreparation::prepare(std::size_t pos, const std::deque<Time>& val)
{
	throw NotImplementedException("std::deque preparation must be implemented.");
}


void AbstractPreparation::prepare(std::size_t pos, const std::list<Time>& val)
{
	throw NotImplementedException("std::list preparation must be implemented.");
}


void AbstractPreparation::prepare(std::size_t pos, const std::vector<Any>& val)
{
	throw NotImplementedException("std::vector preparation must be implemented.");
}


void AbstractPreparation::prepare(std::size_t pos, const std::deque<Any>& val)
{
	throw NotImplementedException("std::deque preparation must be implemented.");
}


void AbstractPreparation::prepare(std::size_t pos, const std::list<Any>& val)
{
	throw NotImplementedException("std::list preparation must be implemented.");
}


void AbstractPreparation::prepare(std::size_t pos, const std::vector<DynamicAny>& val)
{
	throw NotImplementedException("std::vector preparation must be implemented.");
}


void AbstractPreparation::prepare(std::size_t pos, const std::deque<DynamicAny>& val)
{
	throw NotImplementedException("std::deque preparation must be implemented.");
}


void AbstractPreparation::prepare(std::size_t pos, const std::list<DynamicAny>& val)
{
	throw NotImplementedException("std::list preparation must be implemented.");
}


} } // namespace Poco::Data
