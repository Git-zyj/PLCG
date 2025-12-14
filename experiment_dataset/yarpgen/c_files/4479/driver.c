#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8050993642220125744LL;
unsigned int var_2 = 1749162852U;
unsigned int var_3 = 3684382538U;
short var_5 = (short)-21529;
_Bool var_6 = (_Bool)1;
signed char var_7 = (signed char)75;
_Bool var_8 = (_Bool)1;
short var_9 = (short)25601;
int zero = 0;
unsigned short var_11 = (unsigned short)50452;
short var_12 = (short)-32597;
int var_13 = -1654375279;
short var_14 = (short)-15828;
int var_15 = 1424606588;
unsigned long long int var_16 = 11620927132460348350ULL;
unsigned int var_17 = 2632533813U;
unsigned int var_18 = 3192788390U;
unsigned int var_19 = 1987559500U;
short var_20 = (short)23866;
long long int var_21 = 1596182872908046164LL;
signed char var_22 = (signed char)-122;
long long int var_23 = -5726430683644042270LL;
unsigned long long int var_24 = 15717983814374829285ULL;
unsigned short var_25 = (unsigned short)44824;
unsigned long long int var_26 = 12696825036581309454ULL;
unsigned long long int var_27 = 5437918284989077028ULL;
unsigned char var_28 = (unsigned char)24;
unsigned int var_29 = 157978237U;
short var_30 = (short)27906;
int var_31 = 1430165258;
_Bool var_32 = (_Bool)1;
unsigned int arr_0 [14] [14] ;
unsigned short arr_8 [14] ;
unsigned char arr_13 [18] [18] ;
signed char arr_21 [18] [18] [18] [18] [18] ;
unsigned char arr_28 [18] [18] [18] ;
unsigned short arr_29 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = 4069346844U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (unsigned short)49542 : (unsigned short)52361;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_13 [i_0] [i_1] = (unsigned char)61;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)55;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_28 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)14 : (unsigned char)110;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_29 [i_0] [i_1] = (unsigned short)33592;
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
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
