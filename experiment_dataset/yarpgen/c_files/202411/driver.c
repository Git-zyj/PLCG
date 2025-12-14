#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)5259;
long long int var_4 = -3523572619113285208LL;
unsigned char var_8 = (unsigned char)103;
int zero = 0;
int var_10 = -1896188432;
unsigned long long int var_11 = 14850416936403292417ULL;
unsigned char var_12 = (unsigned char)198;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
