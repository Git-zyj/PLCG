#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)134;
unsigned int var_2 = 1870721405U;
unsigned int var_5 = 3872843600U;
short var_8 = (short)31497;
unsigned int var_14 = 4183723934U;
unsigned char var_15 = (unsigned char)212;
unsigned char var_16 = (unsigned char)69;
int zero = 0;
unsigned char var_17 = (unsigned char)36;
unsigned int var_18 = 3994732465U;
unsigned int var_19 = 1371475788U;
unsigned int var_20 = 3913790443U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
