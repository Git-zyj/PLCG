#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)22642;
unsigned int var_8 = 4140577059U;
int var_11 = -939761812;
int var_12 = 627091548;
unsigned int var_16 = 3712277882U;
int var_17 = 1580643874;
int zero = 0;
unsigned int var_19 = 882318258U;
short var_20 = (short)11050;
short var_21 = (short)17516;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
