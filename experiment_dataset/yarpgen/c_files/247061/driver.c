#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 401372012U;
short var_10 = (short)31876;
int var_14 = 51306993;
int zero = 0;
unsigned short var_17 = (unsigned short)19978;
unsigned char var_18 = (unsigned char)200;
unsigned char var_19 = (unsigned char)75;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
