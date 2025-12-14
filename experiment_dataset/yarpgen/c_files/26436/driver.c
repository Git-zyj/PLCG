#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-6321;
unsigned char var_10 = (unsigned char)147;
int var_11 = -310717668;
unsigned short var_12 = (unsigned short)61504;
int zero = 0;
unsigned char var_13 = (unsigned char)128;
signed char var_14 = (signed char)-98;
signed char var_15 = (signed char)-103;
long long int var_16 = -7002136222867814212LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
