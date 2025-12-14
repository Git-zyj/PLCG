#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1805457804;
unsigned char var_4 = (unsigned char)143;
unsigned short var_12 = (unsigned short)56244;
unsigned short var_14 = (unsigned short)44535;
int zero = 0;
unsigned char var_19 = (unsigned char)38;
signed char var_20 = (signed char)-112;
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
