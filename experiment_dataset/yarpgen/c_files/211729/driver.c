#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-2710;
unsigned short var_6 = (unsigned short)12449;
unsigned long long int var_7 = 11822214257996598806ULL;
int var_8 = -1955397066;
long long int var_11 = 5489312002299402606LL;
unsigned long long int var_15 = 1392202743177000716ULL;
int zero = 0;
unsigned long long int var_16 = 14446963594612184694ULL;
int var_17 = -623964839;
unsigned short var_18 = (unsigned short)45960;
unsigned short var_19 = (unsigned short)29544;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
