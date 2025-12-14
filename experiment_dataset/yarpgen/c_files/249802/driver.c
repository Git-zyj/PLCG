#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_12 = 946264090U;
int zero = 0;
unsigned int var_18 = 3089277552U;
unsigned int var_19 = 2451305217U;
unsigned int var_20 = 3081971250U;
unsigned int var_21 = 2329434617U;
unsigned int var_22 = 1822225598U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
