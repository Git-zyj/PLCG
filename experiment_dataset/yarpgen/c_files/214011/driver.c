#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3730984599U;
unsigned char var_1 = (unsigned char)54;
unsigned char var_3 = (unsigned char)164;
long long int var_4 = 6460663112945813497LL;
unsigned char var_5 = (unsigned char)148;
unsigned int var_6 = 51406861U;
unsigned int var_7 = 2831397375U;
long long int var_8 = 253503414779850248LL;
unsigned char var_9 = (unsigned char)221;
unsigned char var_13 = (unsigned char)218;
int zero = 0;
unsigned char var_14 = (unsigned char)29;
long long int var_15 = 8075573329296921413LL;
unsigned int var_16 = 4219349274U;
unsigned char var_17 = (unsigned char)193;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
