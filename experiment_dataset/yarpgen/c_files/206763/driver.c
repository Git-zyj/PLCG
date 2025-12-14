#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)26021;
unsigned short var_1 = (unsigned short)15039;
unsigned long long int var_6 = 8205844205787783993ULL;
unsigned int var_7 = 3662695394U;
unsigned short var_9 = (unsigned short)28387;
int zero = 0;
unsigned int var_12 = 2174849760U;
unsigned short var_13 = (unsigned short)30168;
unsigned short var_14 = (unsigned short)65069;
void init() {
}

void checksum() {
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
