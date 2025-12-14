#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)239;
unsigned char var_5 = (unsigned char)5;
int var_7 = 1520401067;
unsigned long long int var_9 = 14623334617111329968ULL;
signed char var_12 = (signed char)-34;
int zero = 0;
long long int var_14 = 5459039355677217LL;
unsigned int var_15 = 2176000916U;
short var_16 = (short)11716;
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
