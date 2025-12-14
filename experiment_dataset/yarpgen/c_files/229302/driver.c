#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2756191875U;
unsigned long long int var_1 = 2313206688842599404ULL;
int var_7 = 1963611711;
int var_8 = -304935872;
int zero = 0;
unsigned long long int var_10 = 6895436992791480529ULL;
unsigned int var_11 = 3799904899U;
unsigned long long int var_12 = 7342579303305230999ULL;
short var_13 = (short)24611;
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
