#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 3970265856U;
signed char var_10 = (signed char)-67;
unsigned int var_11 = 3558271058U;
unsigned short var_16 = (unsigned short)28143;
unsigned char var_17 = (unsigned char)105;
int zero = 0;
unsigned long long int var_19 = 7152033254889494495ULL;
short var_20 = (short)-7552;
unsigned int var_21 = 3551117125U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
