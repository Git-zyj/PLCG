#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1153724597;
unsigned char var_2 = (unsigned char)100;
unsigned long long int var_6 = 17864619502531185611ULL;
unsigned short var_9 = (unsigned short)12693;
int var_13 = 1434782049;
int zero = 0;
int var_14 = 1408561012;
unsigned short var_15 = (unsigned short)25000;
unsigned char var_16 = (unsigned char)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
