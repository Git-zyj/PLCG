#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)47537;
short var_2 = (short)890;
unsigned char var_6 = (unsigned char)66;
unsigned short var_13 = (unsigned short)54844;
int zero = 0;
unsigned short var_20 = (unsigned short)55976;
unsigned char var_21 = (unsigned char)244;
short var_22 = (short)10215;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
