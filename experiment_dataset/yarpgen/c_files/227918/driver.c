#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-11760;
short var_5 = (short)-31797;
unsigned short var_6 = (unsigned short)24462;
unsigned long long int var_9 = 15803639377710393189ULL;
int zero = 0;
_Bool var_10 = (_Bool)1;
long long int var_11 = 4403361261750101493LL;
long long int var_12 = -3151448987227322707LL;
unsigned int var_13 = 408650410U;
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
