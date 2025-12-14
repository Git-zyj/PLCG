#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)69;
unsigned char var_5 = (unsigned char)122;
short var_8 = (short)30463;
unsigned int var_10 = 3172621030U;
int zero = 0;
signed char var_13 = (signed char)-118;
signed char var_14 = (signed char)56;
unsigned char var_15 = (unsigned char)80;
int var_16 = -653963472;
unsigned long long int var_17 = 6350533427631219292ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
