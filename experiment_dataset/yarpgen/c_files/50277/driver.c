#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)12626;
_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)2518;
unsigned int var_4 = 1772475691U;
unsigned short var_5 = (unsigned short)10955;
unsigned int var_6 = 3087593595U;
unsigned short var_7 = (unsigned short)32793;
short var_8 = (short)29057;
unsigned char var_10 = (unsigned char)84;
unsigned short var_11 = (unsigned short)35070;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)187;
short var_15 = (short)-544;
_Bool var_17 = (_Bool)0;
unsigned int var_19 = 1064953843U;
int zero = 0;
unsigned int var_20 = 2810666753U;
short var_21 = (short)-531;
_Bool var_22 = (_Bool)0;
unsigned char var_23 = (unsigned char)106;
short var_24 = (short)2686;
unsigned short var_25 = (unsigned short)21421;
unsigned short var_26 = (unsigned short)47499;
short var_27 = (short)11926;
short arr_0 [11] [11] ;
short arr_1 [11] [11] ;
short arr_5 [11] [11] [11] ;
unsigned char arr_6 [11] [11] [11] ;
unsigned int arr_10 [23] ;
short arr_11 [23] [23] ;
unsigned int arr_8 [11] [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)14564 : (short)19100;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = (short)7089;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (short)-7033;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned char)4;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_10 [i_0] = 4278905742U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_11 [i_0] [i_1] = (short)13155;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 933731515U : 740178707U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    hash(&seed, arr_8 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
