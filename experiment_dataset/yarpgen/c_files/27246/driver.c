#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)17402;
long long int var_9 = 2513434454028389034LL;
unsigned long long int var_16 = 453108287828568648ULL;
int zero = 0;
unsigned int var_18 = 1917227324U;
unsigned long long int var_19 = 12987964968204870852ULL;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 3102103864087648918ULL;
int arr_0 [25] [25] ;
unsigned short arr_2 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? -860258221 : -1645322237;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (unsigned short)4805;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
