#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 483405653;
signed char var_1 = (signed char)120;
int var_2 = 1056383213;
_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)1;
int var_6 = -24797536;
signed char var_7 = (signed char)15;
signed char var_9 = (signed char)78;
signed char var_10 = (signed char)-57;
int zero = 0;
short var_11 = (short)-22766;
unsigned char var_12 = (unsigned char)136;
signed char var_13 = (signed char)78;
int var_14 = -576754751;
signed char var_15 = (signed char)41;
long long int var_16 = -3810196079816178503LL;
short arr_6 [25] [25] ;
unsigned long long int arr_7 [25] ;
signed char arr_8 [25] ;
short arr_13 [25] [25] ;
int arr_14 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_6 [i_0] [i_1] = (short)11709;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = 18369481951668695303ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = (signed char)-70;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_13 [i_0] [i_1] = (short)1973;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_14 [i_0] = -859695846;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
