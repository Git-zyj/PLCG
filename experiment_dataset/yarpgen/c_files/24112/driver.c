#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2598327275U;
int var_3 = -1901268842;
unsigned short var_11 = (unsigned short)1840;
unsigned long long int var_12 = 15514260743925204844ULL;
int zero = 0;
signed char var_15 = (signed char)-9;
unsigned char var_16 = (unsigned char)135;
int var_17 = -1007816185;
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
