#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1544978040U;
unsigned short var_1 = (unsigned short)63623;
unsigned char var_2 = (unsigned char)160;
long long int var_5 = -3391212968297761553LL;
long long int var_10 = 2168661498245520054LL;
unsigned short var_12 = (unsigned short)65263;
int zero = 0;
long long int var_14 = -1541621506549920941LL;
unsigned int var_15 = 2603124874U;
void init() {
}

void checksum() {
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
