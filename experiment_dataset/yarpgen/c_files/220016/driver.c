#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 603407827U;
signed char var_3 = (signed char)-99;
short var_5 = (short)8017;
short var_9 = (short)21268;
signed char var_10 = (signed char)-25;
int var_11 = 2142425084;
signed char var_12 = (signed char)-4;
int zero = 0;
signed char var_13 = (signed char)8;
signed char var_14 = (signed char)7;
unsigned char var_15 = (unsigned char)190;
unsigned int var_16 = 3504828307U;
void init() {
}

void checksum() {
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
