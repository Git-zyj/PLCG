#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 1379109221983618120ULL;
unsigned short var_4 = (unsigned short)33004;
int var_12 = -1883643576;
short var_13 = (short)-29685;
int zero = 0;
unsigned int var_14 = 525459240U;
signed char var_15 = (signed char)87;
unsigned short var_16 = (unsigned short)59972;
int var_17 = 365970835;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
