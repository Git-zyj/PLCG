#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)67;
unsigned char var_2 = (unsigned char)29;
short var_3 = (short)32454;
unsigned long long int var_4 = 1337989884173803852ULL;
signed char var_5 = (signed char)-5;
unsigned short var_6 = (unsigned short)55225;
int var_7 = -1220802341;
unsigned short var_8 = (unsigned short)45437;
int zero = 0;
unsigned short var_12 = (unsigned short)50252;
unsigned short var_13 = (unsigned short)36869;
short var_14 = (short)-23831;
short var_15 = (short)-4995;
signed char var_16 = (signed char)-100;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
