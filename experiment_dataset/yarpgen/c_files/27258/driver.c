#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)21104;
unsigned short var_11 = (unsigned short)48364;
signed char var_13 = (signed char)72;
short var_15 = (short)21426;
signed char var_18 = (signed char)8;
int zero = 0;
short var_20 = (short)1658;
unsigned char var_21 = (unsigned char)75;
void init() {
}

void checksum() {
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
