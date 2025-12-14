#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)69;
unsigned char var_4 = (unsigned char)89;
unsigned char var_5 = (unsigned char)86;
unsigned char var_8 = (unsigned char)2;
short var_9 = (short)-619;
int zero = 0;
unsigned int var_16 = 2731192715U;
unsigned int var_17 = 837835747U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
