#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)63009;
signed char var_1 = (signed char)73;
unsigned short var_2 = (unsigned short)15416;
long long int var_3 = 994656068295495010LL;
unsigned long long int var_4 = 9231685366515574165ULL;
unsigned char var_5 = (unsigned char)42;
unsigned short var_6 = (unsigned short)29880;
unsigned int var_7 = 1434691833U;
signed char var_8 = (signed char)30;
unsigned long long int var_9 = 9227420732301193685ULL;
int zero = 0;
unsigned long long int var_10 = 6732439463262501810ULL;
unsigned short var_11 = (unsigned short)33378;
signed char var_12 = (signed char)43;
unsigned long long int var_13 = 3896762072660478363ULL;
int var_14 = -137940620;
unsigned long long int var_15 = 12164820183084098884ULL;
unsigned char var_16 = (unsigned char)63;
unsigned long long int var_17 = 16109019531664006967ULL;
unsigned int var_18 = 1935366608U;
long long int var_19 = 2170836425851069194LL;
unsigned long long int var_20 = 10871033771603358778ULL;
_Bool arr_0 [16] [16] ;
unsigned short arr_1 [16] ;
short arr_3 [18] ;
_Bool arr_4 [18] [18] ;
long long int arr_7 [24] [24] ;
unsigned int arr_2 [16] ;
long long int arr_5 [18] [18] ;
unsigned int arr_8 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (unsigned short)54860;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (short)-10725;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_7 [i_0] [i_1] = 1170543784765767082LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = 436111495U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = 8266917196372153801LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = 1499093023U;
}

void checksum() {
    hash(&seed, var_10);
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
