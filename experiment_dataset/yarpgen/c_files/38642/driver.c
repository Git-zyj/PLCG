#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)64055;
unsigned char var_4 = (unsigned char)201;
short var_8 = (short)30282;
short var_10 = (short)-28470;
unsigned char var_16 = (unsigned char)244;
short var_17 = (short)-7017;
int zero = 0;
unsigned int var_18 = 565858381U;
unsigned int var_19 = 2537813007U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
