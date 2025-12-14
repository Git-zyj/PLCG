#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)127;
unsigned char var_1 = (unsigned char)212;
int var_2 = -1850605585;
unsigned short var_6 = (unsigned short)44181;
int zero = 0;
short var_11 = (short)-25371;
int var_12 = 34083883;
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
