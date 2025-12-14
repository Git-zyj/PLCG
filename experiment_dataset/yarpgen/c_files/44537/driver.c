#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-25849;
unsigned char var_1 = (unsigned char)123;
unsigned char var_8 = (unsigned char)149;
unsigned short var_9 = (unsigned short)32106;
int zero = 0;
unsigned int var_10 = 2854556764U;
unsigned short var_11 = (unsigned short)62420;
unsigned char var_12 = (unsigned char)122;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
