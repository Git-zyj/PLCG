#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)1612;
unsigned short var_1 = (unsigned short)47808;
unsigned long long int var_3 = 3160825153692672143ULL;
unsigned int var_4 = 897352691U;
int zero = 0;
short var_12 = (short)3475;
unsigned char var_13 = (unsigned char)143;
int var_14 = 1240135987;
unsigned long long int var_15 = 11735411941088937156ULL;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)59069;
unsigned long long int var_18 = 5149510589228704551ULL;
unsigned short var_19 = (unsigned short)63434;
short var_20 = (short)22886;
short var_21 = (short)14198;
short var_22 = (short)-9588;
_Bool var_23 = (_Bool)1;
unsigned char var_24 = (unsigned char)105;
unsigned int var_25 = 971364215U;
unsigned char var_26 = (unsigned char)71;
unsigned long long int var_27 = 7567268429518723826ULL;
int arr_5 [15] [15] [15] ;
unsigned short arr_13 [20] ;
unsigned short arr_14 [20] ;
short arr_15 [20] ;
_Bool arr_17 [20] ;
unsigned char arr_18 [20] [20] [20] ;
unsigned char arr_19 [20] [20] ;
unsigned char arr_20 [20] ;
short arr_22 [20] [20] [20] [20] ;
short arr_26 [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 748290714;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_13 [i_0] = (unsigned short)9044;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_14 [i_0] = (unsigned short)437;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_15 [i_0] = (short)11088;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_17 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (unsigned char)106;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_19 [i_0] [i_1] = (unsigned char)141;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_20 [i_0] = (unsigned char)28;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_22 [i_0] [i_1] [i_2] [i_3] = (short)6913;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (short)29679 : (short)-15131;
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
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
