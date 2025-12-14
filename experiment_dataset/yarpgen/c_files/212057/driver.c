#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)11395;
unsigned int var_5 = 3060265276U;
long long int var_11 = -8729753972390737081LL;
unsigned char var_15 = (unsigned char)115;
unsigned short var_17 = (unsigned short)38626;
unsigned long long int var_18 = 16621742707464187185ULL;
int zero = 0;
unsigned long long int var_19 = 6933922532708887237ULL;
int var_20 = -1951277536;
unsigned long long int var_21 = 10342087321060435929ULL;
short var_22 = (short)-32430;
unsigned int var_23 = 2624172709U;
_Bool arr_2 [20] [20] ;
int arr_6 [20] ;
unsigned short arr_7 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = 1328089320;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = (unsigned short)19561;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
