#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-122;
long long int var_1 = -8172775053062073568LL;
unsigned char var_3 = (unsigned char)107;
int var_5 = 1552673873;
unsigned short var_6 = (unsigned short)49644;
unsigned short var_7 = (unsigned short)14517;
unsigned char var_8 = (unsigned char)228;
short var_9 = (short)-13639;
signed char var_11 = (signed char)-4;
int zero = 0;
short var_12 = (short)330;
unsigned char var_13 = (unsigned char)196;
long long int var_14 = -6240646658037071475LL;
int var_15 = 1224841120;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
