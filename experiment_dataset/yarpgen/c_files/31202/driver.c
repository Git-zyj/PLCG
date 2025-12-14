#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)54284;
unsigned int var_3 = 746328203U;
unsigned short var_8 = (unsigned short)22158;
unsigned short var_10 = (unsigned short)21426;
int zero = 0;
unsigned int var_15 = 1820123113U;
short var_16 = (short)4264;
void init() {
}

void checksum() {
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
