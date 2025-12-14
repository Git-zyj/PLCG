#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12222783410395401548ULL;
unsigned char var_10 = (unsigned char)146;
unsigned char var_15 = (unsigned char)58;
int zero = 0;
short var_17 = (short)-8017;
unsigned int var_18 = 2951318875U;
unsigned int var_19 = 1613946405U;
void init() {
}

void checksum() {
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
