#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9885246352923974140ULL;
short var_1 = (short)55;
short var_2 = (short)31214;
int var_7 = 138459065;
unsigned short var_12 = (unsigned short)55942;
short var_14 = (short)-9690;
int zero = 0;
long long int var_15 = 2574343677120005969LL;
unsigned long long int var_16 = 14269256823637330129ULL;
unsigned char var_17 = (unsigned char)9;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
