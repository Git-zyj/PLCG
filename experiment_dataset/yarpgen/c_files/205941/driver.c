#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8246308351524261156LL;
unsigned int var_2 = 2371345612U;
unsigned short var_19 = (unsigned short)45078;
int zero = 0;
signed char var_20 = (signed char)-91;
unsigned char var_21 = (unsigned char)213;
unsigned char var_22 = (unsigned char)59;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
