#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-8032;
unsigned short var_1 = (unsigned short)20997;
unsigned char var_8 = (unsigned char)249;
unsigned long long int var_15 = 13893797755244078061ULL;
short var_17 = (short)-20944;
int var_19 = 1758278229;
int zero = 0;
unsigned int var_20 = 1817260736U;
long long int var_21 = 3265758802478220510LL;
long long int var_22 = -7521856131932296272LL;
void init() {
}

void checksum() {
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
