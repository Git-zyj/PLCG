#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)7828;
unsigned short var_2 = (unsigned short)29440;
unsigned char var_3 = (unsigned char)239;
unsigned int var_5 = 920840869U;
unsigned short var_6 = (unsigned short)63383;
short var_7 = (short)-14692;
unsigned int var_9 = 4029866407U;
int zero = 0;
unsigned int var_12 = 1271587783U;
unsigned char var_13 = (unsigned char)5;
unsigned char var_14 = (unsigned char)255;
unsigned int var_15 = 3344280468U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
