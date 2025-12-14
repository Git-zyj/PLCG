#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)62640;
long long int var_9 = -2611469449217889530LL;
unsigned short var_11 = (unsigned short)12071;
int zero = 0;
unsigned short var_15 = (unsigned short)63672;
unsigned short var_16 = (unsigned short)45769;
unsigned short var_17 = (unsigned short)1383;
short var_18 = (short)-24227;
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
