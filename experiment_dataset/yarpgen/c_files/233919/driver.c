#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)20722;
unsigned char var_4 = (unsigned char)44;
signed char var_6 = (signed char)2;
short var_14 = (short)-16613;
unsigned char var_15 = (unsigned char)252;
int zero = 0;
unsigned short var_20 = (unsigned short)24382;
unsigned short var_21 = (unsigned short)62584;
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
