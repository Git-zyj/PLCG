#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3153838242U;
long long int var_4 = -3168960220501025761LL;
long long int var_9 = 963601902452031116LL;
unsigned int var_10 = 1325449693U;
unsigned int var_11 = 1355870458U;
unsigned int var_12 = 1365183390U;
int zero = 0;
unsigned int var_13 = 3016845885U;
unsigned short var_14 = (unsigned short)36740;
long long int var_15 = 2862861371533043077LL;
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
