#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8952929891725682708ULL;
unsigned short var_1 = (unsigned short)14326;
unsigned int var_17 = 3479805130U;
int zero = 0;
unsigned char var_20 = (unsigned char)236;
unsigned long long int var_21 = 12689411297073852465ULL;
unsigned long long int var_22 = 6705274996997438505ULL;
_Bool var_23 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
