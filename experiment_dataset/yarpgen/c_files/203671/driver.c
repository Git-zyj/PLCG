#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)47652;
unsigned int var_8 = 3438854953U;
unsigned short var_11 = (unsigned short)42028;
long long int var_12 = 8425747542772323003LL;
int zero = 0;
unsigned short var_13 = (unsigned short)30338;
unsigned int var_14 = 2100140969U;
unsigned short var_15 = (unsigned short)49133;
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
