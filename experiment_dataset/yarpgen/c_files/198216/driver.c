#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6402694106838723794LL;
unsigned long long int var_8 = 9237804465799112778ULL;
_Bool var_10 = (_Bool)1;
unsigned int var_17 = 1100701732U;
int zero = 0;
unsigned long long int var_20 = 9784669114188217041ULL;
signed char var_21 = (signed char)34;
int var_22 = -2096828392;
short var_23 = (short)5812;
long long int var_24 = 4504125628331050951LL;
_Bool arr_2 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
