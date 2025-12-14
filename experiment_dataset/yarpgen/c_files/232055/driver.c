#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12846961738084087146ULL;
unsigned int var_9 = 613778009U;
unsigned int var_11 = 1104531901U;
int zero = 0;
unsigned long long int var_12 = 16104902010666242648ULL;
unsigned int var_13 = 3970919839U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
