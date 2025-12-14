#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5936515863988191923ULL;
long long int var_3 = 963893819228899172LL;
short var_5 = (short)16120;
unsigned short var_6 = (unsigned short)43928;
int var_7 = -1334356163;
unsigned long long int var_8 = 7838403135209199406ULL;
unsigned short var_9 = (unsigned short)17905;
int zero = 0;
long long int var_10 = 2610442526930030220LL;
unsigned long long int var_11 = 15714630389367070814ULL;
_Bool var_12 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
