#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)30376;
unsigned short var_6 = (unsigned short)13568;
long long int var_8 = -5391503073313027676LL;
unsigned int var_15 = 1313411443U;
int zero = 0;
short var_16 = (short)-6449;
unsigned short var_17 = (unsigned short)52715;
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
