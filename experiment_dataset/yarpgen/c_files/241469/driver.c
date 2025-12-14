#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)7298;
short var_7 = (short)-24502;
unsigned char var_8 = (unsigned char)91;
unsigned char var_9 = (unsigned char)176;
short var_10 = (short)17556;
unsigned long long int var_12 = 8470425057090824515ULL;
int var_13 = 823168624;
int zero = 0;
_Bool var_14 = (_Bool)1;
int var_15 = 2001450916;
void init() {
}

void checksum() {
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
