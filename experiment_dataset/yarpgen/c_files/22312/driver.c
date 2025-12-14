#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3916296847019296819LL;
int var_3 = 1080105167;
short var_5 = (short)-27393;
long long int var_7 = -705900026597283805LL;
unsigned short var_10 = (unsigned short)42942;
short var_14 = (short)443;
int zero = 0;
unsigned long long int var_16 = 1255907442480416688ULL;
int var_17 = 1112592270;
short var_18 = (short)26784;
int var_19 = -1153057379;
signed char var_20 = (signed char)-127;
unsigned long long int var_21 = 14979158839637284864ULL;
unsigned short var_22 = (unsigned short)5609;
unsigned char var_23 = (unsigned char)101;
unsigned long long int var_24 = 9034329421652331207ULL;
_Bool var_25 = (_Bool)1;
short var_26 = (short)15591;
unsigned long long int arr_0 [20] ;
unsigned char arr_1 [20] ;
short arr_3 [23] ;
signed char arr_5 [23] ;
short arr_7 [23] [23] ;
signed char arr_8 [23] [23] [23] ;
unsigned int arr_9 [23] [23] ;
unsigned char arr_11 [23] [23] ;
unsigned char arr_13 [23] [23] ;
unsigned char arr_2 [20] ;
signed char arr_10 [23] ;
unsigned long long int arr_14 [23] [23] ;
unsigned short arr_19 [21] [21] ;
signed char arr_20 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = 70684936756170332ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (unsigned char)4;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (short)-12999;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (signed char)27;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_7 [i_0] [i_1] = (short)24800;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)-126 : (signed char)-122;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_9 [i_0] [i_1] = 997221628U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_11 [i_0] [i_1] = (unsigned char)20;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_13 [i_0] [i_1] = (unsigned char)173;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (unsigned char)8;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (signed char)-89 : (signed char)110;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_14 [i_0] [i_1] = 11922255594952406066ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_19 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)48541 : (unsigned short)33043;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_20 [i_0] = (i_0 % 2 == 0) ? (signed char)-88 : (signed char)30;
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
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_20 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
