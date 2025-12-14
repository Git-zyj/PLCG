#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_7 = -7195064530534654077LL;
unsigned int var_8 = 3747271851U;
int zero = 0;
long long int var_13 = -7421363019611073906LL;
unsigned long long int var_14 = 124631122792334746ULL;
unsigned char var_15 = (unsigned char)59;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
