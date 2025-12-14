#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 558640363258522480ULL;
unsigned short var_3 = (unsigned short)43612;
unsigned short var_6 = (unsigned short)35048;
unsigned long long int var_16 = 11360078255979940935ULL;
unsigned char var_19 = (unsigned char)28;
int zero = 0;
short var_20 = (short)20145;
short var_21 = (short)-20662;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
