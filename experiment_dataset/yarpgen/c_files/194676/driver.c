#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 2433794308874765171LL;
unsigned short var_4 = (unsigned short)14211;
short var_9 = (short)-23646;
long long int var_14 = 8876487105587289094LL;
unsigned int var_18 = 3423171715U;
int zero = 0;
unsigned int var_19 = 491599463U;
unsigned int var_20 = 2106484330U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
