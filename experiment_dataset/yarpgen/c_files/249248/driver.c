#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -607691386;
long long int var_3 = -642846486964457345LL;
short var_5 = (short)28118;
long long int var_9 = 7998615551712494178LL;
int zero = 0;
short var_14 = (short)8647;
unsigned char var_15 = (unsigned char)131;
void init() {
}

void checksum() {
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
