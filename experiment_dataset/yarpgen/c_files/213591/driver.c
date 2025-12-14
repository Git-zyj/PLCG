#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)45189;
int var_6 = 406241677;
short var_7 = (short)-4705;
unsigned long long int var_11 = 4505931966175033097ULL;
int zero = 0;
int var_14 = -708519537;
unsigned long long int var_15 = 10543714735285497168ULL;
signed char var_16 = (signed char)-17;
unsigned char var_17 = (unsigned char)53;
unsigned int var_18 = 574403652U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
