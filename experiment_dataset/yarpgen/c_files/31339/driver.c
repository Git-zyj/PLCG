#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2518119318U;
unsigned long long int var_11 = 16163543935087511306ULL;
unsigned long long int var_16 = 3861074198090306498ULL;
int zero = 0;
signed char var_19 = (signed char)45;
unsigned int var_20 = 314210764U;
unsigned char var_21 = (unsigned char)37;
unsigned long long int var_22 = 11721021884473771245ULL;
void init() {
}

void checksum() {
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
