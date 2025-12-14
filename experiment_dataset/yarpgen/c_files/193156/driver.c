#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned int var_5 = 14986641U;
unsigned int var_8 = 4078902645U;
long long int var_11 = -2127874212499740003LL;
unsigned long long int var_12 = 2514716265691847219ULL;
int var_14 = 862587492;
int zero = 0;
unsigned short var_15 = (unsigned short)46730;
unsigned char var_16 = (unsigned char)41;
unsigned long long int var_17 = 4271989761227671793ULL;
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
