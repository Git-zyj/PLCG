#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)35;
unsigned char var_6 = (unsigned char)90;
unsigned char var_16 = (unsigned char)247;
int zero = 0;
unsigned char var_20 = (unsigned char)76;
unsigned char var_21 = (unsigned char)220;
short var_22 = (short)-31800;
unsigned char var_23 = (unsigned char)122;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
