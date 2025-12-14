#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1137790796;
unsigned int var_3 = 463629100U;
signed char var_6 = (signed char)70;
unsigned short var_7 = (unsigned short)42448;
unsigned char var_8 = (unsigned char)87;
int var_10 = 286310810;
unsigned long long int var_11 = 10621020717113640060ULL;
int zero = 0;
int var_15 = 1938024477;
int var_16 = 1440867704;
int var_17 = 1490415939;
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
