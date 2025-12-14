#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 635721760U;
unsigned int var_5 = 553571274U;
unsigned short var_7 = (unsigned short)45982;
short var_10 = (short)-6992;
short var_16 = (short)18823;
signed char var_17 = (signed char)-63;
int zero = 0;
unsigned short var_18 = (unsigned short)38443;
short var_19 = (short)7198;
short var_20 = (short)3943;
unsigned long long int var_21 = 13782580871036597861ULL;
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
