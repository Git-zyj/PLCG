#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1933529316;
long long int var_1 = -6502382136621433301LL;
int var_2 = 1178051290;
signed char var_8 = (signed char)-47;
unsigned short var_9 = (unsigned short)21311;
unsigned char var_12 = (unsigned char)235;
unsigned short var_14 = (unsigned short)14503;
int zero = 0;
unsigned short var_15 = (unsigned short)64189;
int var_16 = 415118342;
unsigned short var_17 = (unsigned short)65338;
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
