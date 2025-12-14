#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1953121623U;
unsigned int var_3 = 771082541U;
unsigned long long int var_6 = 3303060594589859847ULL;
int var_14 = 2107369335;
unsigned short var_15 = (unsigned short)45352;
short var_16 = (short)8922;
unsigned int var_17 = 2343979507U;
int zero = 0;
unsigned char var_19 = (unsigned char)150;
short var_20 = (short)16287;
void init() {
}

void checksum() {
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
