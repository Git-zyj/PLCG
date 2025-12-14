#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7043310469705192316ULL;
int var_1 = 757209123;
unsigned short var_2 = (unsigned short)22750;
unsigned long long int var_3 = 17005553435613041171ULL;
unsigned short var_4 = (unsigned short)2148;
int var_5 = 1877933367;
unsigned long long int var_6 = 7857044408861508965ULL;
short var_7 = (short)11864;
signed char var_8 = (signed char)17;
unsigned short var_10 = (unsigned short)22495;
int zero = 0;
signed char var_11 = (signed char)-100;
unsigned short var_12 = (unsigned short)31324;
unsigned short var_13 = (unsigned short)24083;
signed char var_14 = (signed char)-6;
long long int var_15 = 7709832070405381847LL;
unsigned short var_16 = (unsigned short)31557;
unsigned short var_17 = (unsigned short)61840;
unsigned int var_18 = 3418050804U;
unsigned int var_19 = 2302650227U;
unsigned long long int var_20 = 15016514622513864493ULL;
unsigned int arr_0 [10] ;
unsigned short arr_2 [20] ;
unsigned long long int arr_3 [20] ;
unsigned long long int arr_11 [16] ;
unsigned short arr_12 [16] ;
unsigned long long int arr_13 [16] ;
unsigned long long int arr_4 [20] ;
unsigned long long int arr_5 [20] ;
unsigned short arr_6 [20] [20] ;
unsigned int arr_9 [20] [20] ;
int arr_14 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 4170485025U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (unsigned short)14010;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = 3067269378268905087ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_11 [i_0] = 15982790065953625702ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_12 [i_0] = (unsigned short)22261;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? 15224872283782997105ULL : 6457189764191558871ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = 14905288702546073188ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = 16550528669213342222ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)63976;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_9 [i_0] [i_1] = 2067981407U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_14 [i_0] [i_1] = (i_1 % 2 == 0) ? 2111638034 : 290408664;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
