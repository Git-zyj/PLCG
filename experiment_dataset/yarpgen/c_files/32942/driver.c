#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)23490;
unsigned char var_6 = (unsigned char)129;
unsigned int var_8 = 1232695752U;
unsigned char var_10 = (unsigned char)130;
unsigned int var_12 = 1402718182U;
short var_13 = (short)-30023;
short var_14 = (short)2807;
int zero = 0;
unsigned int var_15 = 1700941500U;
unsigned char var_16 = (unsigned char)188;
signed char var_17 = (signed char)12;
unsigned int var_18 = 1397950623U;
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
