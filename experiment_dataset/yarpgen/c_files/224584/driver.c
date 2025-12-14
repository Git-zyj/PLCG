#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1593054303622633888ULL;
int var_9 = -2029404493;
int zero = 0;
unsigned long long int var_15 = 4552411863617459128ULL;
unsigned long long int var_16 = 9475618254047495263ULL;
unsigned int var_17 = 3773352715U;
unsigned long long int var_18 = 5809240114340014755ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
