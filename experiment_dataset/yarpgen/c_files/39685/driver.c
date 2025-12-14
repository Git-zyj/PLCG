#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 4030826106U;
long long int var_5 = -2474320869408144586LL;
int var_10 = -1736065516;
int var_11 = -889302597;
short var_12 = (short)-6771;
int zero = 0;
long long int var_20 = 1896199873057344583LL;
int var_21 = -697583612;
int var_22 = -812245397;
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
