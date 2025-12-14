#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)13312;
unsigned int var_1 = 2830899538U;
unsigned int var_5 = 884218650U;
unsigned short var_6 = (unsigned short)40870;
int zero = 0;
short var_16 = (short)26702;
unsigned char var_17 = (unsigned char)81;
unsigned long long int var_18 = 13318069267709949310ULL;
signed char var_19 = (signed char)-7;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
