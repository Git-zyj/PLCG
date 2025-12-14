#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2791465771456315701ULL;
_Bool var_4 = (_Bool)1;
unsigned int var_5 = 2258273832U;
int var_10 = -390669559;
unsigned char var_14 = (unsigned char)140;
unsigned char var_15 = (unsigned char)61;
int var_17 = 983610346;
int zero = 0;
long long int var_20 = 2886364347371744823LL;
signed char var_21 = (signed char)90;
int var_22 = 931321462;
int var_23 = -1193795486;
signed char arr_0 [15] ;
short arr_5 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (signed char)87;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (short)19152;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
