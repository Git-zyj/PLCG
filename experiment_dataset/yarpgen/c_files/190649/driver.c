#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)66;
unsigned long long int var_5 = 6684116078684982418ULL;
_Bool var_7 = (_Bool)1;
short var_8 = (short)4596;
_Bool var_10 = (_Bool)1;
unsigned long long int var_12 = 7418657056623968503ULL;
_Bool var_16 = (_Bool)1;
unsigned long long int var_18 = 4901599251746278134ULL;
long long int var_19 = -3836354799147454898LL;
int zero = 0;
long long int var_20 = 9063727043676582996LL;
_Bool var_21 = (_Bool)1;
signed char var_22 = (signed char)53;
_Bool arr_0 [21] ;
signed char arr_2 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)77 : (signed char)-116;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
