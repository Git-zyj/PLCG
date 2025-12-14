#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 3164480387U;
unsigned long long int var_17 = 4910721729605042831ULL;
int zero = 0;
unsigned long long int var_18 = 10337670609519069088ULL;
unsigned long long int var_19 = 6686451716936043851ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
