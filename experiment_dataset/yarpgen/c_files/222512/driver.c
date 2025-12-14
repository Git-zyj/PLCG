#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)30702;
unsigned char var_5 = (unsigned char)175;
unsigned long long int var_8 = 15004861298572431004ULL;
unsigned long long int var_12 = 2958747687224423862ULL;
unsigned int var_13 = 900602681U;
int zero = 0;
unsigned long long int var_14 = 911748642053662177ULL;
signed char var_15 = (signed char)48;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
