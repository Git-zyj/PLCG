#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)29091;
short var_1 = (short)-27700;
short var_3 = (short)-1079;
short var_6 = (short)14216;
short var_8 = (short)-17879;
signed char var_10 = (signed char)115;
int var_13 = -1897133555;
int zero = 0;
short var_15 = (short)-30069;
signed char var_16 = (signed char)24;
short var_17 = (short)3266;
int var_18 = 310575916;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
