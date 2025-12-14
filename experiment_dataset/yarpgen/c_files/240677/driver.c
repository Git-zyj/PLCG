#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1593675544;
unsigned long long int var_2 = 18273198916317228930ULL;
short var_3 = (short)6329;
int var_4 = 1092755547;
short var_5 = (short)-3609;
unsigned short var_7 = (unsigned short)6652;
unsigned short var_11 = (unsigned short)40086;
int zero = 0;
signed char var_12 = (signed char)-35;
signed char var_13 = (signed char)-69;
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
