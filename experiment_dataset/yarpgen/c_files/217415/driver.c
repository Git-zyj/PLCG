#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10996180601015736705ULL;
unsigned char var_3 = (unsigned char)45;
unsigned short var_5 = (unsigned short)65066;
unsigned short var_10 = (unsigned short)59436;
unsigned int var_11 = 2320536804U;
unsigned int var_12 = 1919233266U;
int zero = 0;
unsigned short var_13 = (unsigned short)7210;
short var_14 = (short)12547;
unsigned int var_15 = 232117682U;
_Bool var_16 = (_Bool)0;
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
