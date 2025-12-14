#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-10361;
unsigned int var_1 = 2576928174U;
signed char var_6 = (signed char)(-127 - 1);
unsigned char var_17 = (unsigned char)139;
int zero = 0;
unsigned char var_18 = (unsigned char)69;
short var_19 = (short)-16235;
unsigned char var_20 = (unsigned char)84;
long long int var_21 = -574841379312211748LL;
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
