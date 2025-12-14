#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)32;
signed char var_3 = (signed char)-87;
unsigned short var_4 = (unsigned short)44401;
unsigned short var_7 = (unsigned short)59167;
unsigned short var_9 = (unsigned short)36696;
int var_11 = -1022359165;
unsigned long long int var_14 = 12120681856107007943ULL;
int zero = 0;
unsigned long long int var_16 = 3989594375207278686ULL;
short var_17 = (short)25525;
short var_18 = (short)-22246;
signed char var_19 = (signed char)55;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
