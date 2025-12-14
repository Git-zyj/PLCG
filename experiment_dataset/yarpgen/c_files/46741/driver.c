#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)30224;
int var_2 = -1045459835;
long long int var_5 = -4512150335796276354LL;
signed char var_6 = (signed char)11;
short var_10 = (short)-25987;
int zero = 0;
unsigned char var_13 = (unsigned char)82;
short var_14 = (short)4522;
unsigned char var_15 = (unsigned char)220;
unsigned char var_16 = (unsigned char)143;
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
