#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3911700670678046374ULL;
short var_1 = (short)24406;
unsigned long long int var_2 = 7117745320338938127ULL;
unsigned short var_4 = (unsigned short)786;
signed char var_5 = (signed char)5;
unsigned char var_7 = (unsigned char)140;
short var_10 = (short)-12019;
unsigned int var_11 = 2450271908U;
unsigned long long int var_14 = 2265301034472112539ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)169;
short var_17 = (short)-27351;
unsigned char var_18 = (unsigned char)59;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
