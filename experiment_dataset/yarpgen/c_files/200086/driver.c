#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 5748531255219687138LL;
unsigned long long int var_3 = 4599256410617381178ULL;
unsigned long long int var_4 = 13234539292231353889ULL;
int zero = 0;
signed char var_10 = (signed char)-63;
signed char var_11 = (signed char)55;
unsigned short var_12 = (unsigned short)2769;
unsigned long long int var_13 = 13393624219893130525ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
