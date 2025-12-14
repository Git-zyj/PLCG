#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1748458208U;
_Bool var_5 = (_Bool)1;
unsigned long long int var_10 = 1259356953278424163ULL;
unsigned long long int var_11 = 8213223710081921776ULL;
short var_12 = (short)-21152;
unsigned int var_14 = 2946729048U;
int zero = 0;
unsigned int var_15 = 3352819758U;
int var_16 = 301099190;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 2133334859U;
short arr_2 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (short)114;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
