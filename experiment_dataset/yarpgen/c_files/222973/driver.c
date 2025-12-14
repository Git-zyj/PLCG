#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)63227;
unsigned int var_1 = 823097297U;
unsigned short var_3 = (unsigned short)7081;
unsigned int var_7 = 2230672160U;
int var_9 = 2099288075;
unsigned short var_11 = (unsigned short)984;
int zero = 0;
short var_13 = (short)5012;
short var_14 = (short)-23541;
unsigned short var_15 = (unsigned short)49715;
unsigned long long int var_16 = 3116882917296553584ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
