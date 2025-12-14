#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)13123;
signed char var_3 = (signed char)-7;
short var_4 = (short)21146;
unsigned int var_5 = 455119014U;
int var_6 = -632928408;
unsigned char var_7 = (unsigned char)239;
signed char var_10 = (signed char)-31;
unsigned char var_13 = (unsigned char)33;
int zero = 0;
signed char var_14 = (signed char)-52;
unsigned int var_15 = 2155850950U;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 3545114497U;
unsigned int arr_6 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 2386257291U : 2186257651U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
