#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)5157;
long long int var_3 = -6432390413512198633LL;
unsigned short var_4 = (unsigned short)29360;
unsigned char var_5 = (unsigned char)216;
unsigned char var_6 = (unsigned char)163;
unsigned long long int var_7 = 4763030219555229438ULL;
unsigned long long int var_10 = 3699105844848100910ULL;
unsigned char var_11 = (unsigned char)45;
unsigned char var_12 = (unsigned char)56;
int zero = 0;
long long int var_14 = 8472214194423360237LL;
unsigned char var_15 = (unsigned char)220;
unsigned short var_16 = (unsigned short)1826;
unsigned short var_17 = (unsigned short)32711;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
