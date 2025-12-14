#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-429;
unsigned short var_3 = (unsigned short)29959;
short var_4 = (short)28921;
int var_6 = -1040700204;
signed char var_8 = (signed char)43;
unsigned int var_9 = 2682176604U;
short var_10 = (short)-30205;
int zero = 0;
unsigned long long int var_11 = 4153836348263369114ULL;
unsigned int var_12 = 3835805190U;
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
