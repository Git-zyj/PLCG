#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 4138648657317547218LL;
signed char var_5 = (signed char)-78;
unsigned char var_6 = (unsigned char)247;
int var_7 = -361527379;
int var_9 = 539459414;
int var_10 = 1824850187;
int zero = 0;
unsigned long long int var_11 = 7914990470000094039ULL;
long long int var_12 = 6035016278667860731LL;
unsigned long long int var_13 = 16109903879679678020ULL;
signed char var_14 = (signed char)99;
unsigned long long int var_15 = 5545581486873890904ULL;
short var_16 = (short)8166;
_Bool var_17 = (_Bool)1;
long long int var_18 = 6213221898191622132LL;
unsigned long long int var_19 = 313789550212552176ULL;
unsigned long long int var_20 = 14960022418792183007ULL;
short arr_0 [18] [18] ;
unsigned int arr_2 [18] ;
signed char arr_3 [18] [18] ;
signed char arr_4 [18] [18] [18] ;
unsigned long long int arr_5 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-21841;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 1056359146U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)-25;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (signed char)98;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = 7621843501102883103ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
