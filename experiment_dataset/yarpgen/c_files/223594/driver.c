#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2041612513U;
signed char var_4 = (signed char)-71;
short var_5 = (short)504;
unsigned int var_8 = 2531308482U;
unsigned short var_9 = (unsigned short)19135;
unsigned int var_10 = 2239060870U;
long long int var_11 = 9011953974208543553LL;
short var_14 = (short)-6402;
int zero = 0;
short var_15 = (short)15690;
unsigned int var_16 = 4212966279U;
unsigned short var_17 = (unsigned short)42032;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
