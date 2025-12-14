#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1699966753;
int var_1 = -305749454;
unsigned short var_5 = (unsigned short)55960;
int zero = 0;
unsigned short var_14 = (unsigned short)64061;
unsigned char var_15 = (unsigned char)133;
int var_16 = -2015716140;
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
