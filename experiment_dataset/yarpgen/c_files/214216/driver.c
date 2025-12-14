#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -290994892;
unsigned char var_6 = (unsigned char)17;
unsigned long long int var_8 = 14318239176451717162ULL;
unsigned char var_11 = (unsigned char)206;
int zero = 0;
unsigned short var_12 = (unsigned short)63466;
unsigned char var_13 = (unsigned char)84;
void init() {
}

void checksum() {
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
