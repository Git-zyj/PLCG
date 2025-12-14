#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)39488;
unsigned short var_4 = (unsigned short)29805;
short var_6 = (short)-26341;
unsigned short var_8 = (unsigned short)57582;
unsigned int var_9 = 1023376544U;
int zero = 0;
unsigned char var_11 = (unsigned char)128;
short var_12 = (short)7949;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
