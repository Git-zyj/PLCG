#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12592722173339895063ULL;
unsigned short var_2 = (unsigned short)24214;
_Bool var_4 = (_Bool)0;
short var_5 = (short)-356;
long long int var_6 = 7461460874482135187LL;
_Bool var_7 = (_Bool)0;
_Bool var_10 = (_Bool)1;
unsigned int var_14 = 2284386595U;
int zero = 0;
long long int var_20 = 7542925696298338543LL;
_Bool var_21 = (_Bool)1;
unsigned char var_22 = (unsigned char)241;
unsigned char var_23 = (unsigned char)29;
int var_24 = 1897446063;
unsigned char var_25 = (unsigned char)111;
_Bool var_26 = (_Bool)1;
long long int arr_0 [19] ;
long long int arr_1 [19] [19] ;
_Bool arr_3 [23] ;
_Bool arr_4 [23] ;
_Bool arr_10 [15] ;
_Bool arr_12 [15] [15] ;
short arr_2 [19] [19] ;
long long int arr_5 [23] ;
short arr_6 [23] [23] ;
unsigned int arr_9 [11] [11] ;
int arr_13 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 8886790079955415777LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = 592435420367316993LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_10 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_12 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = (short)25026;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? -6154837148462060345LL : 7075917430116403142LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)16447 : (short)-29906;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_9 [i_0] [i_1] = (i_1 % 2 == 0) ? 3701206974U : 992509152U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? -387211804 : -2018746529;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
