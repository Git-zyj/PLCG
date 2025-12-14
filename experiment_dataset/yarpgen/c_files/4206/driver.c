#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -9087437067928840339LL;
long long int var_7 = -6582034428783504593LL;
int var_8 = 709225212;
unsigned short var_10 = (unsigned short)53212;
short var_12 = (short)-21882;
int var_15 = -1252663176;
int zero = 0;
signed char var_18 = (signed char)112;
int var_19 = -292671646;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
