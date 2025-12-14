#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 18159861361211672055ULL;
int var_8 = 609032458;
unsigned long long int var_11 = 92443906237082939ULL;
int zero = 0;
_Bool var_15 = (_Bool)0;
int var_16 = -665056780;
signed char var_17 = (signed char)-87;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
