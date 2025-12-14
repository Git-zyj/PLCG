#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -545865527;
unsigned int var_2 = 1089642367U;
short var_12 = (short)-218;
int zero = 0;
signed char var_13 = (signed char)-4;
unsigned short var_14 = (unsigned short)21917;
unsigned short var_15 = (unsigned short)51070;
unsigned int var_16 = 2511438906U;
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
