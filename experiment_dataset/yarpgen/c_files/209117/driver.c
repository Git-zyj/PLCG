#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2085111172U;
unsigned int var_1 = 1690571960U;
unsigned int var_4 = 3095629437U;
unsigned int var_5 = 3217502147U;
unsigned int var_6 = 3945602243U;
unsigned int var_7 = 555253508U;
unsigned int var_13 = 2612894808U;
int zero = 0;
unsigned int var_14 = 794332006U;
long long int var_15 = -3261007295787507320LL;
unsigned int var_16 = 747732936U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
