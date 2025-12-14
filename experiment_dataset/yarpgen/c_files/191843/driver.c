#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)247;
int var_7 = -995853728;
unsigned int var_8 = 4186537889U;
int var_9 = -1378683765;
short var_11 = (short)30883;
int zero = 0;
short var_13 = (short)5700;
int var_14 = -696522892;
unsigned short var_15 = (unsigned short)53651;
unsigned char var_16 = (unsigned char)107;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
