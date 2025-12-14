#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-20359;
unsigned int var_2 = 1388674783U;
int var_4 = -1614216899;
short var_9 = (short)-27932;
long long int var_10 = 2070302764558039094LL;
long long int var_11 = -5442062449935798710LL;
unsigned short var_12 = (unsigned short)37360;
short var_15 = (short)24485;
int zero = 0;
long long int var_16 = 5962517254061429401LL;
unsigned short var_17 = (unsigned short)19909;
int var_18 = 1523682635;
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
