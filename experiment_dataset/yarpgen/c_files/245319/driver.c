#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 16978294444265747845ULL;
long long int var_4 = -1588822238220958515LL;
int var_5 = 248260477;
int var_11 = -685805223;
unsigned char var_14 = (unsigned char)31;
int zero = 0;
int var_20 = 1526458083;
unsigned char var_21 = (unsigned char)112;
int var_22 = -158333202;
int var_23 = -1617092049;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
