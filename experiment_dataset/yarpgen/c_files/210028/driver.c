#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-12077;
unsigned int var_2 = 2418963513U;
unsigned int var_4 = 311208720U;
unsigned int var_8 = 1814708496U;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned short var_12 = (unsigned short)48518;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)1;
_Bool arr_0 [11] ;
int arr_1 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = -615979387;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
