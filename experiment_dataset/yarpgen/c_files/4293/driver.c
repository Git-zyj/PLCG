#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 382133368U;
unsigned int var_4 = 3108182066U;
signed char var_6 = (signed char)96;
long long int var_7 = 2397352089178884172LL;
short var_8 = (short)-16778;
unsigned long long int var_9 = 13792238691480194096ULL;
unsigned long long int var_12 = 14379418962745013162ULL;
short var_13 = (short)-4937;
int zero = 0;
long long int var_14 = 6942324040052184571LL;
short var_15 = (short)-21380;
long long int var_16 = -4452000758783205125LL;
long long int var_17 = 6083290660497647132LL;
unsigned long long int var_18 = 9695312826825168300ULL;
unsigned long long int arr_0 [18] ;
long long int arr_1 [18] ;
long long int arr_3 [18] ;
long long int arr_6 [18] [18] ;
unsigned int arr_8 [18] ;
short arr_9 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 347624079963127219ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 3494245790608565130LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? -1830414296768788268LL : -6464212332084943847LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_6 [i_0] [i_1] = -8587967531119975881LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 793940113U : 2784837417U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (short)-5142 : (short)-11547;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
