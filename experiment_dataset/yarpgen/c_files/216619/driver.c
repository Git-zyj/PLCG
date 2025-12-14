#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4506757706864322941LL;
int zero = 0;
unsigned int var_13 = 480545506U;
unsigned long long int var_14 = 9162924808867551902ULL;
unsigned int var_15 = 3253683122U;
unsigned char var_16 = (unsigned char)116;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
