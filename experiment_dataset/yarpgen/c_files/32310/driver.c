#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)29;
_Bool var_2 = (_Bool)1;
unsigned long long int var_4 = 15523119741680837028ULL;
short var_5 = (short)9024;
long long int var_9 = -5212514464567345943LL;
short var_11 = (short)36;
unsigned char var_13 = (unsigned char)76;
signed char var_15 = (signed char)-87;
_Bool var_18 = (_Bool)0;
int zero = 0;
short var_20 = (short)-968;
short var_21 = (short)8964;
unsigned short var_22 = (unsigned short)61347;
_Bool var_23 = (_Bool)1;
unsigned int var_24 = 1852088696U;
unsigned int var_25 = 2237634837U;
_Bool var_26 = (_Bool)0;
signed char var_27 = (signed char)-7;
unsigned int var_28 = 999766827U;
short var_29 = (short)-5579;
unsigned short var_30 = (unsigned short)42528;
unsigned char var_31 = (unsigned char)105;
unsigned char var_32 = (unsigned char)251;
unsigned long long int var_33 = 8617098235032458872ULL;
unsigned char var_34 = (unsigned char)45;
signed char var_35 = (signed char)-109;
short var_36 = (short)7497;
_Bool var_37 = (_Bool)1;
long long int var_38 = -5199038445531819636LL;
signed char arr_0 [23] ;
_Bool arr_1 [23] ;
short arr_4 [23] ;
unsigned char arr_6 [23] [23] [23] ;
unsigned int arr_7 [23] [23] ;
unsigned char arr_8 [23] [23] [23] ;
short arr_10 [23] [23] [23] ;
signed char arr_14 [23] [23] [23] ;
short arr_2 [23] ;
unsigned int arr_15 [23] ;
unsigned long long int arr_18 [23] ;
unsigned int arr_21 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (signed char)-12;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (short)5802;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned char)254;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_7 [i_0] [i_1] = 2962325261U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (unsigned char)233;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (short)-16609;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (signed char)-97;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (short)-4767;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_15 [i_0] = 2469599418U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_18 [i_0] = 16990381145288717967ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_21 [i_0] [i_1] = (i_1 % 2 == 0) ? 148867469U : 85519018U;
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
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_21 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
