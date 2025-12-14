#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-26047;
unsigned int var_4 = 1806317446U;
unsigned short var_5 = (unsigned short)59522;
unsigned int var_6 = 2655837758U;
unsigned short var_8 = (unsigned short)14162;
unsigned short var_9 = (unsigned short)18108;
unsigned int var_11 = 4273841760U;
int zero = 0;
signed char var_13 = (signed char)-34;
unsigned int var_14 = 2913117926U;
void init() {
}

void checksum() {
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
