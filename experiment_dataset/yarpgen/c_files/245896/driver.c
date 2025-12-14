#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)132;
unsigned int var_2 = 4166355922U;
long long int var_4 = -367734106592758759LL;
signed char var_7 = (signed char)107;
long long int var_9 = 5252241016815464297LL;
int zero = 0;
unsigned short var_10 = (unsigned short)30012;
unsigned long long int var_11 = 7664788916445287308ULL;
unsigned short var_12 = (unsigned short)25491;
unsigned long long int var_13 = 17192032503039898229ULL;
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
