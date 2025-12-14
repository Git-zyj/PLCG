#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)48337;
short var_8 = (short)-4989;
unsigned int var_9 = 2147693958U;
short var_12 = (short)12787;
unsigned short var_14 = (unsigned short)52334;
long long int var_15 = 4771348670245580494LL;
unsigned int var_18 = 1879624531U;
int zero = 0;
signed char var_20 = (signed char)42;
signed char var_21 = (signed char)105;
unsigned short var_22 = (unsigned short)11870;
long long int var_23 = 6907944066939407427LL;
unsigned short var_24 = (unsigned short)35405;
unsigned int arr_0 [24] ;
unsigned long long int arr_1 [24] ;
unsigned int arr_2 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 2725378887U : 3204941717U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 15263443765079362307ULL : 8158353320629017467ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 275872667U : 1766297898U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
