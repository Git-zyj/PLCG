#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = -1102726521;
signed char var_12 = (signed char)32;
unsigned int var_13 = 771882192U;
int var_14 = -1946207339;
int zero = 0;
unsigned long long int var_15 = 2245915080258869971ULL;
long long int var_16 = -4638648015312229532LL;
unsigned short var_17 = (unsigned short)52997;
signed char var_18 = (signed char)-105;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
