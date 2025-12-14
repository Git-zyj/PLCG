#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)57804;
unsigned long long int var_2 = 2735223229992101174ULL;
short var_5 = (short)-16931;
unsigned short var_6 = (unsigned short)46604;
unsigned int var_7 = 2549867741U;
unsigned char var_10 = (unsigned char)191;
int zero = 0;
long long int var_15 = 1756254940492164309LL;
signed char var_16 = (signed char)46;
unsigned long long int var_17 = 17841903724115161924ULL;
long long int var_18 = -7358362335679961516LL;
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
