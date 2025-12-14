#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1529206606;
unsigned short var_1 = (unsigned short)5557;
unsigned short var_3 = (unsigned short)27597;
signed char var_4 = (signed char)33;
int var_6 = 2101538083;
signed char var_7 = (signed char)54;
int var_8 = -102337334;
short var_10 = (short)32575;
short var_11 = (short)-15673;
unsigned short var_15 = (unsigned short)63288;
int zero = 0;
unsigned short var_16 = (unsigned short)50096;
signed char var_17 = (signed char)75;
void init() {
}

void checksum() {
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
