#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -898703171325778339LL;
unsigned long long int var_11 = 13567183853463237181ULL;
int zero = 0;
unsigned long long int var_14 = 16911121546245990211ULL;
signed char var_15 = (signed char)80;
void init() {
}

void checksum() {
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
