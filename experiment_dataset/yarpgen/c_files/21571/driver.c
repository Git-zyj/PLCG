#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-26837;
unsigned int var_1 = 2898323858U;
unsigned int var_2 = 3668580879U;
short var_5 = (short)-12346;
signed char var_6 = (signed char)(-127 - 1);
int var_9 = -1608426173;
short var_10 = (short)-32225;
int zero = 0;
unsigned char var_11 = (unsigned char)101;
int var_12 = 1371596385;
int var_13 = 1384264663;
unsigned short var_14 = (unsigned short)35491;
unsigned int var_15 = 3645584294U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
