#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)81;
unsigned short var_1 = (unsigned short)34111;
long long int var_15 = 1489245111625071990LL;
int zero = 0;
unsigned int var_17 = 2903775489U;
unsigned long long int var_18 = 7694338262253328303ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
