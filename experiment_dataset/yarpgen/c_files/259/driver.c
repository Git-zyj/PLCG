#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)1382;
unsigned long long int var_3 = 11854134406682017602ULL;
unsigned int var_7 = 3809999561U;
int var_8 = 319208401;
int var_11 = -254314240;
signed char var_12 = (signed char)-40;
unsigned long long int var_13 = 2989943721032346458ULL;
short var_14 = (short)12329;
int zero = 0;
short var_15 = (short)-17046;
signed char var_16 = (signed char)38;
void init() {
}

void checksum() {
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
