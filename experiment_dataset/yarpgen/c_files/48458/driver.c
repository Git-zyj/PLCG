#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)16885;
short var_10 = (short)-7575;
unsigned int var_15 = 2529673446U;
unsigned int var_18 = 3071721806U;
int zero = 0;
unsigned short var_20 = (unsigned short)35794;
unsigned short var_21 = (unsigned short)15501;
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
