#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -661908545;
long long int var_3 = -4574924423014137540LL;
unsigned short var_10 = (unsigned short)53764;
signed char var_11 = (signed char)50;
short var_13 = (short)-31483;
int zero = 0;
signed char var_14 = (signed char)-104;
unsigned long long int var_15 = 10972361449655426424ULL;
signed char var_16 = (signed char)17;
void init() {
}

void checksum() {
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
