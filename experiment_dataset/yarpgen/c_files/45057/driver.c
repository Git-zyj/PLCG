#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)212;
unsigned int var_8 = 2294361157U;
int var_9 = 1052137589;
int zero = 0;
unsigned short var_14 = (unsigned short)8724;
short var_15 = (short)-5614;
unsigned int var_16 = 3711185399U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
