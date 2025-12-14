#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)23756;
int var_4 = -102343957;
int var_5 = -1106148059;
unsigned short var_6 = (unsigned short)56149;
int zero = 0;
int var_15 = 604709479;
unsigned char var_16 = (unsigned char)54;
unsigned short var_17 = (unsigned short)42858;
unsigned char var_18 = (unsigned char)244;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
