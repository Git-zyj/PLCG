#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16295285436979623742ULL;
int var_1 = 1524375705;
int var_3 = -20889107;
unsigned char var_7 = (unsigned char)30;
long long int var_8 = 1023108297527047558LL;
int zero = 0;
long long int var_15 = 6374075511599631022LL;
short var_16 = (short)24252;
long long int var_17 = 865208859428834619LL;
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
