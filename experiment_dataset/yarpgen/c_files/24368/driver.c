#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -161205336;
unsigned short var_1 = (unsigned short)9350;
signed char var_3 = (signed char)-93;
long long int var_5 = -5570253984226762684LL;
long long int var_6 = 2546235115958718423LL;
unsigned short var_7 = (unsigned short)29400;
unsigned long long int var_11 = 14006839994249816008ULL;
unsigned short var_12 = (unsigned short)45761;
short var_13 = (short)16149;
int zero = 0;
unsigned short var_15 = (unsigned short)53364;
unsigned short var_16 = (unsigned short)17460;
unsigned short var_17 = (unsigned short)4845;
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
