#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -130467852;
unsigned short var_1 = (unsigned short)57140;
unsigned long long int var_3 = 5579887456138221256ULL;
int var_10 = -2139358836;
unsigned int var_11 = 1083585319U;
long long int var_12 = 6892529008504867685LL;
int var_15 = 222175277;
unsigned long long int var_17 = 17393825251453747478ULL;
signed char var_18 = (signed char)-48;
int zero = 0;
long long int var_19 = 6548486703864984223LL;
int var_20 = -2032819332;
unsigned char var_21 = (unsigned char)88;
short var_22 = (short)21025;
short var_23 = (short)1351;
unsigned short var_24 = (unsigned short)15887;
int var_25 = -1562779439;
int var_26 = 1084987786;
unsigned short var_27 = (unsigned short)26000;
unsigned int var_28 = 2016504926U;
unsigned int var_29 = 630991247U;
int var_30 = -95158298;
unsigned long long int var_31 = 2064033376023821402ULL;
unsigned int var_32 = 2852288482U;
long long int var_33 = -540956861114862550LL;
int var_34 = 1160820287;
unsigned short var_35 = (unsigned short)52901;
_Bool arr_3 [15] [15] ;
_Bool arr_5 [15] [15] [15] ;
unsigned long long int arr_6 [15] ;
unsigned short arr_7 [15] ;
signed char arr_11 [15] [15] ;
unsigned long long int arr_12 [15] [15] [15] ;
unsigned short arr_18 [11] ;
unsigned short arr_23 [11] ;
unsigned int arr_9 [15] [15] [15] ;
long long int arr_10 [15] [15] ;
int arr_21 [11] ;
long long int arr_22 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = 6253379214327950897ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = (unsigned short)26685;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_11 [i_0] [i_1] = (signed char)-45;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 5145436551464218180ULL : 18328921164926815684ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_18 [i_0] = (unsigned short)32897;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_23 [i_0] = (i_0 % 2 == 0) ? (unsigned short)17304 : (unsigned short)29439;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 778770752U : 794879696U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_10 [i_0] [i_1] = (i_0 % 2 == 0) ? 664889843721957734LL : 3833320106861576151LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_21 [i_0] = 1170293351;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_22 [i_0] = -1845424832795799626LL;
}

void checksum() {
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
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_9 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_22 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
