#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1716231415;
unsigned short var_1 = (unsigned short)16603;
int var_10 = 621699670;
int zero = 0;
int var_14 = -1960619361;
unsigned long long int var_15 = 16497718749047870125ULL;
unsigned short var_16 = (unsigned short)764;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
