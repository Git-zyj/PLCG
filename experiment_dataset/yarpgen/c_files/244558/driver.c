#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 504359711;
unsigned char var_1 = (unsigned char)219;
int var_8 = -2132380644;
unsigned char var_9 = (unsigned char)245;
short var_10 = (short)16625;
unsigned char var_11 = (unsigned char)211;
int zero = 0;
unsigned char var_14 = (unsigned char)197;
short var_15 = (short)2624;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
