#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)10681;
unsigned long long int var_3 = 18242107188555368711ULL;
short var_7 = (short)-18171;
signed char var_14 = (signed char)-10;
int zero = 0;
unsigned short var_16 = (unsigned short)20287;
unsigned long long int var_17 = 3174243901737506341ULL;
unsigned short var_18 = (unsigned short)32611;
void init() {
}

void checksum() {
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
