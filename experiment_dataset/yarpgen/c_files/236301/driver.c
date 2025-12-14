#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)26678;
unsigned int var_8 = 483230432U;
unsigned short var_9 = (unsigned short)30293;
unsigned char var_11 = (unsigned char)62;
int zero = 0;
unsigned long long int var_16 = 13785542104970951676ULL;
unsigned short var_17 = (unsigned short)51077;
unsigned short var_18 = (unsigned short)39998;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
