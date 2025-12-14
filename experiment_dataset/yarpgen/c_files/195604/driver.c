#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1666139538;
unsigned short var_10 = (unsigned short)1088;
unsigned char var_13 = (unsigned char)101;
unsigned short var_16 = (unsigned short)1840;
int zero = 0;
short var_19 = (short)28505;
unsigned long long int var_20 = 13299321402949541337ULL;
short var_21 = (short)-15768;
signed char var_22 = (signed char)65;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
