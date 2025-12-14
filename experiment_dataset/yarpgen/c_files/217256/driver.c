#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)205;
long long int var_8 = -9126964912291410764LL;
long long int var_9 = -4260388341534569211LL;
long long int var_11 = -7460489460241602893LL;
int zero = 0;
int var_12 = 522412805;
unsigned short var_13 = (unsigned short)60753;
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
