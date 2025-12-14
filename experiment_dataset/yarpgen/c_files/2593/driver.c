#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 2135502687;
int var_4 = 1156871490;
unsigned int var_9 = 1678741995U;
unsigned char var_10 = (unsigned char)222;
unsigned short var_12 = (unsigned short)7078;
int zero = 0;
unsigned short var_15 = (unsigned short)21063;
unsigned short var_16 = (unsigned short)46067;
void init() {
}

void checksum() {
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
