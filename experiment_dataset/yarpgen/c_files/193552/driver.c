#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 334047845061374510LL;
unsigned char var_3 = (unsigned char)244;
short var_5 = (short)-5012;
unsigned long long int var_8 = 1774001317500592597ULL;
int zero = 0;
short var_13 = (short)19052;
unsigned long long int var_14 = 11456724212304753639ULL;
short var_15 = (short)8558;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
