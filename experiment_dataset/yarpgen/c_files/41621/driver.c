#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_2 = (signed char)-79;
_Bool var_4 = (_Bool)1;
unsigned char var_8 = (unsigned char)99;
int zero = 0;
unsigned char var_16 = (unsigned char)241;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)140;
_Bool var_19 = (_Bool)0;
long long int var_20 = 1869695363221849273LL;
unsigned int arr_0 [14] ;
unsigned int arr_1 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 3095339026U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 2951419246U;
}

void checksum() {
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
