#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8155071242313440202LL;
long long int var_2 = -7542184865419859486LL;
unsigned char var_3 = (unsigned char)179;
unsigned long long int var_4 = 11611354797603571240ULL;
unsigned short var_5 = (unsigned short)48143;
unsigned int var_6 = 2510112223U;
unsigned short var_7 = (unsigned short)11565;
short var_8 = (short)13675;
_Bool var_9 = (_Bool)1;
unsigned int var_10 = 3291588106U;
unsigned int var_11 = 2596226808U;
short var_12 = (short)32433;
unsigned int var_13 = 2739547400U;
int zero = 0;
long long int var_14 = -4691805268148623051LL;
unsigned long long int var_15 = 10397230993800672758ULL;
signed char var_16 = (signed char)33;
unsigned short var_17 = (unsigned short)5786;
unsigned int var_18 = 2580468209U;
unsigned int var_19 = 2542885329U;
unsigned int var_20 = 1642679685U;
_Bool var_21 = (_Bool)0;
_Bool var_22 = (_Bool)0;
signed char var_23 = (signed char)-102;
unsigned int var_24 = 1314690377U;
unsigned long long int var_25 = 3770884289900571710ULL;
_Bool arr_0 [13] ;
_Bool arr_1 [13] [13] ;
signed char arr_2 [13] ;
long long int arr_3 [13] [13] ;
unsigned long long int arr_4 [13] [13] ;
_Bool arr_6 [13] [13] ;
unsigned short arr_7 [13] [13] [13] ;
signed char arr_10 [13] [13] [13] [13] ;
unsigned long long int arr_11 [13] ;
signed char arr_13 [13] [13] [13] ;
unsigned int arr_14 [13] [13] [13] [13] ;
unsigned int arr_16 [13] ;
int arr_18 [13] [13] [13] [13] ;
signed char arr_20 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (signed char)-61;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = 4360581869328235878LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = 5545407841741608299ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (unsigned short)8509;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (signed char)-114 : (signed char)-87;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? 14566949853582260760ULL : 12371867611964113538ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)49 : (signed char)-40;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 1397811544U : 2161775148U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_16 [i_0] = 2357052773U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = 249287977;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_20 [i_0] = (i_0 % 2 == 0) ? (signed char)-36 : (signed char)69;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
