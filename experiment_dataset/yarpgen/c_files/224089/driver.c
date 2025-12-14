#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)72;
short var_3 = (short)-21343;
unsigned short var_5 = (unsigned short)36060;
short var_6 = (short)1700;
int zero = 0;
unsigned char var_11 = (unsigned char)237;
unsigned int var_12 = 2375510149U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
