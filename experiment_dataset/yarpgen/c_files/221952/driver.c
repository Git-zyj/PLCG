#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 794788584;
int var_13 = -1658484472;
int var_17 = -1198969966;
int zero = 0;
int var_20 = 1808291470;
unsigned short var_21 = (unsigned short)32765;
unsigned char var_22 = (unsigned char)16;
int var_23 = -1702594129;
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
