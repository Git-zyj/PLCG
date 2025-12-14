#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)12;
unsigned char var_9 = (unsigned char)103;
unsigned char var_10 = (unsigned char)212;
int zero = 0;
unsigned short var_15 = (unsigned short)4597;
unsigned short var_16 = (unsigned short)63324;
unsigned int var_17 = 2697333380U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
