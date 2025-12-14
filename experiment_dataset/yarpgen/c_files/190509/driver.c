#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-31;
signed char var_1 = (signed char)8;
short var_3 = (short)-12861;
int var_4 = 599509966;
signed char var_5 = (signed char)-43;
unsigned char var_6 = (unsigned char)79;
unsigned short var_7 = (unsigned short)17281;
unsigned short var_8 = (unsigned short)55723;
signed char var_11 = (signed char)-122;
short var_12 = (short)-15600;
int zero = 0;
unsigned char var_14 = (unsigned char)25;
unsigned int var_15 = 3421264874U;
signed char var_16 = (signed char)83;
unsigned char var_17 = (unsigned char)221;
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
