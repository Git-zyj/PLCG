#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
unsigned short var_12 = (unsigned short)38966;
int zero = 0;
unsigned long long int var_14 = 6242347259733694935ULL;
long long int var_15 = 1095394730193757655LL;
unsigned int var_16 = 1217094001U;
unsigned long long int var_17 = 17391642948571649926ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
