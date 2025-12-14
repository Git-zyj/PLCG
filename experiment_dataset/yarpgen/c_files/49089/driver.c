#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 13563585;
signed char var_4 = (signed char)-59;
int var_5 = 817627970;
short var_8 = (short)-23019;
short var_9 = (short)-14674;
signed char var_10 = (signed char)-54;
short var_11 = (short)7;
signed char var_13 = (signed char)125;
int zero = 0;
short var_15 = (short)-7223;
int var_16 = 1163181129;
int var_17 = 73027362;
short var_18 = (short)30609;
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
