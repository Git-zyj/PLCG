#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)101;
unsigned short var_2 = (unsigned short)45171;
unsigned short var_4 = (unsigned short)2691;
int var_7 = -552977447;
unsigned long long int var_10 = 1946067489295448612ULL;
int zero = 0;
unsigned long long int var_19 = 6545848414642145787ULL;
int var_20 = 2021170157;
unsigned short var_21 = (unsigned short)48813;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
