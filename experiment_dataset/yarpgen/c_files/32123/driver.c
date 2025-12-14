#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 338823716;
_Bool var_10 = (_Bool)1;
unsigned long long int var_14 = 8589614536028128086ULL;
short var_16 = (short)31232;
int zero = 0;
unsigned long long int var_20 = 4943151184377413165ULL;
unsigned int var_21 = 563741641U;
void init() {
}

void checksum() {
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
