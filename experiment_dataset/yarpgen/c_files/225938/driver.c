#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)218;
unsigned long long int var_12 = 17951095810462556687ULL;
int var_14 = -960028102;
unsigned int var_15 = 246435422U;
unsigned long long int var_19 = 2430436417446879107ULL;
int zero = 0;
int var_20 = 1321864551;
unsigned int var_21 = 1864834792U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
