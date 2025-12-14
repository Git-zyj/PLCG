#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 499210306471357204LL;
long long int var_5 = 2023318777164102202LL;
unsigned int var_8 = 3745678292U;
int zero = 0;
unsigned short var_12 = (unsigned short)61760;
short var_13 = (short)-29864;
void init() {
}

void checksum() {
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
