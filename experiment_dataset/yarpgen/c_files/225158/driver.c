#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3988872867U;
unsigned long long int var_2 = 13688908317746071173ULL;
long long int var_3 = 7627251651711795451LL;
int var_6 = -1067790157;
unsigned char var_9 = (unsigned char)42;
int zero = 0;
long long int var_10 = -6933443661951565185LL;
short var_11 = (short)18120;
unsigned short var_12 = (unsigned short)15110;
unsigned int var_13 = 503613266U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
