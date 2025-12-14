#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)6;
int var_8 = 434257100;
signed char var_9 = (signed char)-115;
int var_10 = 1315784767;
short var_15 = (short)-18460;
int zero = 0;
short var_16 = (short)23087;
signed char var_17 = (signed char)-73;
signed char var_18 = (signed char)-49;
signed char var_19 = (signed char)-88;
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
