#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8049208744758079925ULL;
unsigned int var_1 = 919681976U;
unsigned long long int var_2 = 9016653133272939178ULL;
unsigned short var_10 = (unsigned short)55628;
unsigned char var_11 = (unsigned char)152;
unsigned int var_12 = 4278648844U;
int zero = 0;
int var_14 = 1021614249;
unsigned long long int var_15 = 17026211278479224561ULL;
signed char var_16 = (signed char)-123;
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
