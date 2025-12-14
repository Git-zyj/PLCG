#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1821491565U;
short var_4 = (short)-16653;
short var_8 = (short)5214;
unsigned int var_9 = 2425954697U;
int var_10 = 1214678116;
unsigned int var_11 = 750425915U;
unsigned short var_12 = (unsigned short)33343;
unsigned int var_13 = 3917416465U;
int zero = 0;
int var_14 = -966863563;
unsigned char var_15 = (unsigned char)208;
short var_16 = (short)-4422;
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
