#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)56700;
short var_16 = (short)-17340;
unsigned int var_17 = 2386415888U;
int zero = 0;
unsigned int var_18 = 4204007474U;
short var_19 = (short)6835;
unsigned short var_20 = (unsigned short)3930;
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
