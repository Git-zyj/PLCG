#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4037389856U;
unsigned short var_2 = (unsigned short)57989;
unsigned short var_3 = (unsigned short)2157;
unsigned char var_4 = (unsigned char)90;
short var_5 = (short)-17649;
int var_6 = 1869790523;
unsigned long long int var_8 = 10820332572317111512ULL;
unsigned char var_10 = (unsigned char)219;
int var_11 = 1688336134;
int zero = 0;
unsigned char var_12 = (unsigned char)33;
int var_13 = -1866770420;
short var_14 = (short)-17915;
long long int var_15 = 9017434522459314563LL;
unsigned short var_16 = (unsigned short)16705;
unsigned int var_17 = 3257708060U;
long long int var_18 = -6560163009993611264LL;
unsigned int var_19 = 4289360987U;
unsigned short var_20 = (unsigned short)43001;
unsigned char var_21 = (unsigned char)13;
unsigned char var_22 = (unsigned char)254;
long long int arr_0 [10] ;
unsigned short arr_4 [13] ;
short arr_6 [23] ;
short arr_7 [23] ;
unsigned int arr_12 [23] ;
_Bool arr_2 [10] ;
unsigned int arr_3 [10] [10] ;
signed char arr_8 [23] ;
unsigned char arr_13 [23] ;
short arr_14 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 4846901685833963906LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (unsigned short)50058;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (short)3673 : (short)-20046;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = (short)-9636;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? 1523770278U : 4012188398U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = 1831957980U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (signed char)-87 : (signed char)-5;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (unsigned char)11 : (unsigned char)208;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (short)-27651 : (short)-13359;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
