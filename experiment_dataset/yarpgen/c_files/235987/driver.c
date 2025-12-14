#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-13150;
unsigned char var_5 = (unsigned char)198;
signed char var_8 = (signed char)-73;
int zero = 0;
unsigned long long int var_10 = 14794318859828310470ULL;
short var_11 = (short)-40;
unsigned int var_12 = 3367962025U;
unsigned char var_13 = (unsigned char)94;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
