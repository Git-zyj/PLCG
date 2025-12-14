#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)21622;
unsigned short var_10 = (unsigned short)61453;
int zero = 0;
unsigned short var_12 = (unsigned short)48217;
unsigned int var_13 = 1485225680U;
short var_14 = (short)8512;
unsigned char var_15 = (unsigned char)23;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
