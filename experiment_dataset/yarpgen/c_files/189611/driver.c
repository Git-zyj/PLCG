#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 1447163203408840565ULL;
unsigned char var_7 = (unsigned char)140;
unsigned long long int var_8 = 17305186869809034827ULL;
int var_10 = -1798822166;
_Bool var_11 = (_Bool)1;
int var_12 = -95518782;
short var_13 = (short)-31584;
unsigned int var_14 = 4026998237U;
int zero = 0;
int var_18 = -1270121602;
int var_19 = -503974411;
unsigned long long int var_20 = 14076153490822474164ULL;
int var_21 = 294532514;
unsigned short var_22 = (unsigned short)4357;
short arr_0 [13] ;
_Bool arr_1 [13] ;
int arr_2 [13] ;
int arr_4 [13] [13] [13] ;
_Bool arr_5 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (short)-12137 : (short)-21069;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = -2084110491;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = -661250406;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
