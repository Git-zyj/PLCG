#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)23564;
int var_6 = 644045070;
unsigned int var_7 = 250229543U;
short var_11 = (short)-9290;
int zero = 0;
unsigned int var_13 = 576698347U;
short var_14 = (short)7347;
unsigned char var_15 = (unsigned char)50;
void init() {
}

void checksum() {
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
