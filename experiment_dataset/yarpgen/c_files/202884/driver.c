#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_10 = (unsigned short)19639;
unsigned int var_11 = 1550022146U;
int var_12 = -645103976;
int zero = 0;
long long int var_16 = -9138113974729832526LL;
unsigned long long int var_17 = 288875969855069486ULL;
signed char var_18 = (signed char)107;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
