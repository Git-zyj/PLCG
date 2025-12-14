#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)69;
int var_1 = 1005811276;
unsigned char var_2 = (unsigned char)64;
signed char var_4 = (signed char)42;
signed char var_5 = (signed char)-112;
int var_6 = -99888463;
long long int var_7 = -7019809895467450546LL;
int var_8 = 1908233526;
int var_11 = -901737093;
unsigned long long int var_12 = 15900508077225599761ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)201;
long long int var_14 = 9080670562786424258LL;
int var_15 = 1901390807;
signed char var_16 = (signed char)-75;
long long int var_17 = -8090910677229427297LL;
long long int var_18 = 7399619726468531583LL;
unsigned int var_19 = 181152356U;
int var_20 = 438976917;
unsigned char var_21 = (unsigned char)118;
unsigned int var_22 = 3022661600U;
_Bool var_23 = (_Bool)1;
int var_24 = 1284617743;
unsigned long long int var_25 = 16982138726855057416ULL;
int arr_0 [18] [18] ;
unsigned short arr_1 [18] ;
signed char arr_2 [18] ;
unsigned char arr_3 [18] [18] [18] ;
long long int arr_4 [18] [18] ;
signed char arr_8 [18] [18] ;
_Bool arr_12 [18] [18] ;
int arr_17 [18] [18] ;
unsigned char arr_20 [18] [18] ;
unsigned char arr_22 [18] ;
unsigned char arr_25 [18] [18] [18] ;
int arr_7 [18] ;
int arr_11 [18] ;
unsigned char arr_14 [18] ;
signed char arr_15 [18] [18] ;
unsigned short arr_19 [18] ;
int arr_24 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = -787539219;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (unsigned short)35831;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (signed char)-12;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned char)35;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = 2086196420850836129LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_8 [i_0] [i_1] = (signed char)-100;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_12 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_17 [i_0] [i_1] = 2134882429;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_20 [i_0] [i_1] = (unsigned char)83;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_22 [i_0] = (unsigned char)51;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = (unsigned char)224;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? -268470253 : -1083041956;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_11 [i_0] = 1015909858;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_14 [i_0] = (unsigned char)49;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_15 [i_0] [i_1] = (signed char)19;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_19 [i_0] = (unsigned short)27812;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_24 [i_0] = 2271716;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_24 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
