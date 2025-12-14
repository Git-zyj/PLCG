#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5653313013538918165ULL;
short var_5 = (short)-25049;
unsigned int var_8 = 2519002095U;
unsigned int var_10 = 502372152U;
unsigned char var_12 = (unsigned char)112;
unsigned char var_13 = (unsigned char)183;
int zero = 0;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)-57;
int var_17 = 1766582222;
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
