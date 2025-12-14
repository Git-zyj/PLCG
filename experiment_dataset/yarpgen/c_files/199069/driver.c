#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -155087148;
int var_2 = -18732857;
unsigned char var_4 = (unsigned char)192;
int var_12 = -759105128;
int zero = 0;
int var_17 = -215435298;
unsigned short var_18 = (unsigned short)10049;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
