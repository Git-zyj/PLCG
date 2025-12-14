#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)1340;
unsigned long long int var_6 = 7372836076568649200ULL;
unsigned char var_7 = (unsigned char)67;
unsigned char var_12 = (unsigned char)72;
long long int var_15 = 3604275465899583900LL;
int zero = 0;
short var_16 = (short)6884;
unsigned int var_17 = 1954777673U;
int var_18 = -301977967;
int var_19 = 1396645796;
int var_20 = 364898547;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
