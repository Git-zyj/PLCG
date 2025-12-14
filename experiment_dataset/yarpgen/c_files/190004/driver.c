#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-40;
long long int var_10 = -1200192960960434722LL;
unsigned char var_12 = (unsigned char)172;
signed char var_14 = (signed char)45;
long long int var_15 = -6911940118556770231LL;
int zero = 0;
unsigned long long int var_19 = 3153917597211474063ULL;
int var_20 = -1802420386;
unsigned char var_21 = (unsigned char)120;
unsigned short var_22 = (unsigned short)232;
void init() {
}

void checksum() {
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
