#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1929791505U;
unsigned int var_6 = 233603679U;
unsigned short var_9 = (unsigned short)45551;
short var_11 = (short)12831;
int zero = 0;
long long int var_12 = 4462137866880459612LL;
unsigned long long int var_13 = 2267358060001112326ULL;
long long int var_14 = 6982506585418973185LL;
int var_15 = -2122386081;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
