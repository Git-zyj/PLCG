#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 14911534008315989782ULL;
short var_7 = (short)-3207;
unsigned long long int var_16 = 2165114559443215878ULL;
short var_17 = (short)-25652;
int zero = 0;
unsigned int var_18 = 3776658175U;
short var_19 = (short)-13836;
short var_20 = (short)-20177;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
