#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)45998;
unsigned short var_6 = (unsigned short)35904;
int zero = 0;
unsigned int var_19 = 1853976602U;
unsigned long long int var_20 = 12529279103770918503ULL;
unsigned short var_21 = (unsigned short)46157;
unsigned char var_22 = (unsigned char)68;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
