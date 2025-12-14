#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)66;
signed char var_1 = (signed char)21;
unsigned int var_3 = 483385989U;
long long int var_4 = 225656117237890083LL;
unsigned char var_5 = (unsigned char)52;
unsigned char var_6 = (unsigned char)48;
unsigned short var_7 = (unsigned short)55240;
unsigned int var_9 = 3588568337U;
signed char var_10 = (signed char)90;
_Bool var_11 = (_Bool)1;
unsigned long long int var_13 = 3730068811296246571ULL;
int var_14 = -25994131;
int zero = 0;
unsigned long long int var_16 = 7552100692872888725ULL;
unsigned short var_17 = (unsigned short)24854;
long long int var_18 = -8785356307907513142LL;
long long int var_19 = -8820105555597915976LL;
unsigned short var_20 = (unsigned short)34999;
unsigned short var_21 = (unsigned short)64625;
unsigned long long int var_22 = 2649003722258423657ULL;
unsigned int var_23 = 3185085593U;
unsigned short var_24 = (unsigned short)63323;
unsigned short arr_0 [22] [22] ;
unsigned long long int arr_1 [22] ;
unsigned short arr_2 [22] ;
unsigned long long int arr_5 [23] [23] ;
unsigned long long int arr_3 [22] ;
long long int arr_7 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)8454 : (unsigned short)34689;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 1877175046564457129ULL : 18236663443540589663ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned short)54448 : (unsigned short)34100;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = 2985269914235892902ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 15259539335590565942ULL : 8979076714776701441ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_7 [i_0] [i_1] = -1987503488881322444LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
