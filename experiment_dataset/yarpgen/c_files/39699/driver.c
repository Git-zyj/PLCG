#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2761344914U;
unsigned int var_5 = 2304218696U;
unsigned int var_9 = 2227585571U;
unsigned int var_13 = 2381147646U;
int zero = 0;
short var_18 = (short)-32498;
int var_19 = -872892793;
int var_20 = 1063047423;
int var_21 = -1418707445;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
