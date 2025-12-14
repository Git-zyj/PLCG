#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6756438844062028449LL;
long long int var_2 = -5357762959011137782LL;
unsigned long long int var_5 = 11237928754015797437ULL;
unsigned long long int var_6 = 7303801272427568133ULL;
long long int var_11 = 5540303756394705298LL;
short var_13 = (short)-28142;
unsigned short var_15 = (unsigned short)7598;
int zero = 0;
signed char var_16 = (signed char)72;
long long int var_17 = -8365258331537245870LL;
unsigned long long int var_18 = 15801125861239981437ULL;
int var_19 = 1740906702;
int var_20 = -269077170;
int var_21 = 2018997969;
int var_22 = 1487536151;
long long int var_23 = 8959523964869034141LL;
unsigned short var_24 = (unsigned short)24855;
_Bool var_25 = (_Bool)0;
short var_26 = (short)13326;
int arr_5 [11] ;
int arr_8 [21] [21] ;
int arr_9 [21] [21] ;
unsigned long long int arr_11 [13] ;
unsigned long long int arr_13 [13] [13] ;
unsigned int arr_23 [24] ;
int arr_3 [11] ;
long long int arr_10 [21] ;
long long int arr_22 [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = -1357817289;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_8 [i_0] [i_1] = -1875020343;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_9 [i_0] [i_1] = -268926873;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_11 [i_0] = 4048921277318611441ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_13 [i_0] [i_1] = 8502859684845169741ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_23 [i_0] = 2144311023U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = -672846159;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_10 [i_0] = 7541159232163316450LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = -5809843223994310059LL;
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_22 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
