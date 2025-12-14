#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)39934;
unsigned short var_9 = (unsigned short)18148;
unsigned short var_12 = (unsigned short)27970;
int zero = 0;
unsigned int var_13 = 3486784898U;
unsigned int var_14 = 4132378635U;
unsigned int var_15 = 1727539734U;
unsigned short var_16 = (unsigned short)15644;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
