#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-16976;
long long int var_3 = 8504660421127793143LL;
int var_7 = -677827021;
int var_8 = 1452945881;
int zero = 0;
short var_14 = (short)8007;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 2842506698U;
unsigned int var_17 = 3487424518U;
short var_18 = (short)7999;
signed char var_19 = (signed char)-31;
int var_20 = -2049693687;
long long int arr_0 [15] ;
int arr_1 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 7904661695806975176LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 1514151484;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
