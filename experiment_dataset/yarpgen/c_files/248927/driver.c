#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)125;
short var_5 = (short)12318;
signed char var_16 = (signed char)29;
int zero = 0;
unsigned long long int var_17 = 13586551042872383329ULL;
unsigned long long int var_18 = 1324713838510971626ULL;
void init() {
}

void checksum() {
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
