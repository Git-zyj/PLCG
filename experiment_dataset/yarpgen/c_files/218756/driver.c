#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7365283820594729600LL;
unsigned int var_3 = 1029170175U;
int zero = 0;
unsigned long long int var_15 = 14541168622335594536ULL;
long long int var_16 = 1725983506093141617LL;
signed char var_17 = (signed char)-25;
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
