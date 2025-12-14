#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)227;
unsigned short var_6 = (unsigned short)27531;
short var_8 = (short)21406;
short var_9 = (short)-3121;
int zero = 0;
unsigned char var_11 = (unsigned char)49;
unsigned char var_12 = (unsigned char)16;
short var_13 = (short)5922;
unsigned char var_14 = (unsigned char)56;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
