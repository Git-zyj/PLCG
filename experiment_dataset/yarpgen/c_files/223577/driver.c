#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -734811915488091646LL;
long long int var_5 = 8720458940782213893LL;
unsigned short var_6 = (unsigned short)4988;
int var_8 = 1437048188;
int zero = 0;
unsigned short var_11 = (unsigned short)3116;
int var_12 = 1448572898;
void init() {
}

void checksum() {
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
