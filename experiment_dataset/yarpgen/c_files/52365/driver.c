#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-40;
signed char var_6 = (signed char)-107;
unsigned long long int var_11 = 15151435105452896677ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)35008;
int var_14 = 316213374;
unsigned short var_15 = (unsigned short)58651;
void init() {
}

void checksum() {
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
