#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7384583836152059184LL;
_Bool var_1 = (_Bool)1;
unsigned int var_5 = 1900037415U;
unsigned char var_8 = (unsigned char)95;
int var_12 = -1727205008;
int zero = 0;
unsigned long long int var_16 = 11098056735212183979ULL;
unsigned long long int var_17 = 18122024681786693800ULL;
long long int var_18 = -3175384273453740304LL;
unsigned int var_19 = 2702742431U;
unsigned char arr_0 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)247;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
