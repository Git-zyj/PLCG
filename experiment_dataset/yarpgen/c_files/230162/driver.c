#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-97;
signed char var_2 = (signed char)22;
unsigned int var_3 = 98633477U;
unsigned short var_6 = (unsigned short)30871;
unsigned int var_8 = 3936900061U;
int zero = 0;
short var_13 = (short)-17890;
unsigned long long int var_14 = 2575321636290866916ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
