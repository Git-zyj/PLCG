#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1466343072;
unsigned char var_6 = (unsigned char)224;
long long int var_8 = 1561161645463903403LL;
int var_9 = 604787183;
unsigned short var_10 = (unsigned short)36959;
int var_13 = 899853179;
int var_14 = -62584308;
unsigned char var_16 = (unsigned char)153;
int zero = 0;
unsigned char var_17 = (unsigned char)160;
unsigned int var_18 = 1397365990U;
long long int var_19 = 1313261743027882438LL;
short var_20 = (short)-16258;
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
