#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 607456875;
short var_5 = (short)-22582;
unsigned short var_9 = (unsigned short)43924;
int zero = 0;
unsigned char var_11 = (unsigned char)124;
int var_12 = -490435872;
unsigned char var_13 = (unsigned char)3;
signed char var_14 = (signed char)98;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
