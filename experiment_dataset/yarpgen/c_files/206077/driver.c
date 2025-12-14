#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 866451444U;
short var_8 = (short)-29342;
signed char var_12 = (signed char)37;
unsigned short var_16 = (unsigned short)55525;
int zero = 0;
_Bool var_19 = (_Bool)0;
int var_20 = 1880543103;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
