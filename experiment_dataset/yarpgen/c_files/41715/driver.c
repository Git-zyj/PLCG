#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)11124;
unsigned short var_7 = (unsigned short)37381;
unsigned long long int var_12 = 3522651280428772796ULL;
unsigned short var_13 = (unsigned short)46357;
unsigned long long int var_14 = 1454858513897229404ULL;
int zero = 0;
int var_18 = 1352388946;
unsigned char var_19 = (unsigned char)232;
short var_20 = (short)-14354;
short var_21 = (short)-28328;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
