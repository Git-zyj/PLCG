#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1854636422U;
unsigned int var_5 = 93424184U;
signed char var_9 = (signed char)3;
int zero = 0;
signed char var_11 = (signed char)48;
signed char var_12 = (signed char)2;
unsigned int var_13 = 3154980728U;
signed char var_14 = (signed char)13;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
