#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)6082;
short var_2 = (short)-8065;
long long int var_3 = -7928947047011427988LL;
unsigned int var_6 = 1567537368U;
signed char var_7 = (signed char)-120;
long long int var_8 = -6582027280210939097LL;
int zero = 0;
int var_12 = -1650171880;
unsigned short var_13 = (unsigned short)29689;
int var_14 = -207310405;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
