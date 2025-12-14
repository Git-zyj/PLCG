#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)23287;
unsigned long long int var_4 = 10153633133489225514ULL;
unsigned short var_10 = (unsigned short)63623;
int zero = 0;
int var_14 = -1993959812;
unsigned long long int var_15 = 18221794985499576489ULL;
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
