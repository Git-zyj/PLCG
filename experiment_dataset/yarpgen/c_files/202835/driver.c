#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1222733326;
signed char var_4 = (signed char)48;
unsigned long long int var_12 = 5310124842429753162ULL;
signed char var_15 = (signed char)61;
int zero = 0;
unsigned long long int var_16 = 18078009216863415789ULL;
unsigned char var_17 = (unsigned char)65;
short var_18 = (short)19342;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
