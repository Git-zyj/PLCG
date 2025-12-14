#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11312252451964092032ULL;
unsigned char var_2 = (unsigned char)170;
int var_4 = -641612895;
unsigned short var_5 = (unsigned short)55152;
short var_6 = (short)4621;
_Bool var_9 = (_Bool)1;
unsigned int var_10 = 1813303897U;
int zero = 0;
unsigned char var_11 = (unsigned char)245;
unsigned long long int var_12 = 18126447116530199408ULL;
unsigned int var_13 = 1111780944U;
long long int var_14 = 1595341529078719717LL;
unsigned long long int var_15 = 4138013837849832271ULL;
unsigned int var_16 = 2819467649U;
int var_17 = -1529516370;
signed char var_18 = (signed char)9;
_Bool var_19 = (_Bool)0;
_Bool var_20 = (_Bool)0;
signed char arr_1 [10] ;
unsigned long long int arr_2 [10] [10] ;
int arr_3 [10] ;
unsigned char arr_4 [24] ;
short arr_5 [24] [24] ;
unsigned long long int arr_10 [16] [16] ;
signed char arr_13 [23] ;
unsigned long long int arr_15 [24] [24] ;
signed char arr_16 [24] [24] ;
_Bool arr_17 [24] ;
unsigned long long int arr_6 [24] ;
unsigned short arr_11 [16] ;
unsigned int arr_14 [23] ;
short arr_18 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (signed char)-22;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = 11331245721001258179ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = -2014716729;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (unsigned char)127;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_5 [i_0] [i_1] = (short)-28557;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_10 [i_0] [i_1] = 6041264837262207574ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_13 [i_0] = (signed char)-66;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_15 [i_0] [i_1] = 11824461053276292346ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_16 [i_0] [i_1] = (signed char)63;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_17 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = 4711218118012408085ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (unsigned short)39961 : (unsigned short)52618;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_14 [i_0] = 757085398U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_18 [i_0] = (short)-17838;
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_18 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
