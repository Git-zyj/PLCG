#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)33;
unsigned int var_4 = 940625213U;
signed char var_6 = (signed char)-33;
short var_8 = (short)-4659;
int zero = 0;
signed char var_12 = (signed char)-100;
int var_13 = -1256191831;
long long int var_14 = 3837968365118473832LL;
unsigned int var_15 = 2261883618U;
unsigned long long int var_16 = 17787207231756716428ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
