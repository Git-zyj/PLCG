#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10759821868948353894ULL;
unsigned int var_2 = 366524260U;
long long int var_7 = -786245254498063502LL;
unsigned char var_9 = (unsigned char)224;
unsigned long long int var_14 = 362756768514604931ULL;
unsigned short var_15 = (unsigned short)37326;
short var_16 = (short)10316;
int zero = 0;
long long int var_17 = 2078906402381228336LL;
short var_18 = (short)-17955;
void init() {
}

void checksum() {
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
