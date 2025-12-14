#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1283167989;
unsigned char var_4 = (unsigned char)21;
signed char var_7 = (signed char)-12;
int var_10 = 1274234498;
int zero = 0;
int var_12 = -1602432345;
short var_13 = (short)16296;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
