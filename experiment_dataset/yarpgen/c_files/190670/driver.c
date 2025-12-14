#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3854467986637538730LL;
unsigned char var_1 = (unsigned char)20;
unsigned short var_6 = (unsigned short)8634;
unsigned long long int var_8 = 6897626526247178915ULL;
int var_11 = -456732922;
int zero = 0;
signed char var_15 = (signed char)-81;
signed char var_16 = (signed char)-122;
unsigned char var_17 = (unsigned char)200;
void init() {
}

void checksum() {
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
