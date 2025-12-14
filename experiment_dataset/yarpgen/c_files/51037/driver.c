#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2188682377U;
signed char var_6 = (signed char)127;
unsigned char var_14 = (unsigned char)137;
long long int var_15 = 6963640893190180588LL;
signed char var_16 = (signed char)-107;
int zero = 0;
unsigned short var_20 = (unsigned short)14190;
long long int var_21 = -8465503158890337250LL;
unsigned short var_22 = (unsigned short)20670;
short var_23 = (short)-6506;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
