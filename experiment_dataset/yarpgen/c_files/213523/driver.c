#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2538216158U;
unsigned long long int var_11 = 14913840788621897352ULL;
int zero = 0;
unsigned long long int var_14 = 15012228374496111318ULL;
unsigned long long int var_15 = 1823835158449345746ULL;
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
