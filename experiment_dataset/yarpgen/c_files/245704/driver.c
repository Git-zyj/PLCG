#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)4391;
short var_4 = (short)-17288;
signed char var_5 = (signed char)-124;
int var_10 = -1523660983;
int zero = 0;
unsigned short var_15 = (unsigned short)60459;
short var_16 = (short)-3829;
unsigned char var_17 = (unsigned char)29;
unsigned long long int var_18 = 11788363132587945292ULL;
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
