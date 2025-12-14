#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12701731691822946999ULL;
unsigned char var_3 = (unsigned char)240;
unsigned short var_10 = (unsigned short)60663;
int zero = 0;
unsigned long long int var_15 = 8550687125503727584ULL;
signed char var_16 = (signed char)-80;
short var_17 = (short)-29256;
unsigned long long int var_18 = 7433700749263037216ULL;
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
