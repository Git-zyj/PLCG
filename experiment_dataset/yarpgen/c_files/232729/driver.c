#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)-7804;
unsigned short var_10 = (unsigned short)64574;
short var_11 = (short)-17822;
int var_14 = 1800482801;
int zero = 0;
long long int var_18 = 4509100556624578637LL;
int var_19 = -1621628901;
unsigned char var_20 = (unsigned char)51;
int var_21 = 1068008950;
int var_22 = -2080179701;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
