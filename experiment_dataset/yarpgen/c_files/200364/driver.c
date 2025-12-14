#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)171;
unsigned char var_5 = (unsigned char)212;
unsigned char var_6 = (unsigned char)218;
short var_7 = (short)-15862;
unsigned char var_9 = (unsigned char)32;
unsigned char var_10 = (unsigned char)50;
int zero = 0;
unsigned int var_11 = 3672771419U;
short var_12 = (short)6064;
long long int var_13 = 9152456674414968255LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
