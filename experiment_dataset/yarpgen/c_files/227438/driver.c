#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)253;
short var_4 = (short)-11236;
unsigned long long int var_7 = 889844532965957290ULL;
unsigned char var_8 = (unsigned char)57;
unsigned long long int var_10 = 1700160181670414762ULL;
unsigned short var_13 = (unsigned short)17180;
unsigned long long int var_14 = 11536740597287068730ULL;
int zero = 0;
unsigned long long int var_18 = 4720152383272920647ULL;
unsigned int var_19 = 2524821953U;
unsigned short var_20 = (unsigned short)25850;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
