#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3938571869049879214ULL;
unsigned char var_10 = (unsigned char)166;
unsigned long long int var_14 = 7721630964721641041ULL;
int zero = 0;
unsigned short var_15 = (unsigned short)5308;
unsigned int var_16 = 1265786012U;
int var_17 = -2088923308;
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
