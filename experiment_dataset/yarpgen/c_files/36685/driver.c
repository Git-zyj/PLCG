#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3351492790U;
unsigned short var_5 = (unsigned short)16407;
int var_6 = -138780732;
unsigned short var_7 = (unsigned short)28308;
unsigned int var_8 = 3496734593U;
unsigned char var_9 = (unsigned char)44;
long long int var_11 = -1694074950033162440LL;
unsigned long long int var_14 = 372972793938563842ULL;
int zero = 0;
short var_16 = (short)6453;
long long int var_17 = 569335652804307059LL;
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
