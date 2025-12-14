#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)30100;
unsigned long long int var_1 = 5943911093524480241ULL;
signed char var_5 = (signed char)69;
unsigned int var_10 = 1700040868U;
int zero = 0;
signed char var_13 = (signed char)117;
unsigned char var_14 = (unsigned char)128;
long long int var_15 = 4534104164215119193LL;
unsigned char var_16 = (unsigned char)112;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
