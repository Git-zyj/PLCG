#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 5993101271870492256LL;
unsigned long long int var_3 = 15787651398547047343ULL;
int var_6 = 1364015412;
short var_8 = (short)-7481;
unsigned short var_9 = (unsigned short)10462;
int zero = 0;
signed char var_14 = (signed char)111;
unsigned long long int var_15 = 2582508944967690351ULL;
signed char var_16 = (signed char)-97;
unsigned int var_17 = 2451424568U;
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
