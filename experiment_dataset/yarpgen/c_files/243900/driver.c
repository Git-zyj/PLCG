#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)18945;
int var_1 = 1530337746;
short var_4 = (short)-14603;
unsigned char var_5 = (unsigned char)52;
int var_8 = 1210154380;
int var_12 = 35757754;
unsigned short var_14 = (unsigned short)16852;
int zero = 0;
signed char var_15 = (signed char)93;
short var_16 = (short)-6878;
short var_17 = (short)12243;
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
