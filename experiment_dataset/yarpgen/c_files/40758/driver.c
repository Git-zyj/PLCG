#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)49630;
short var_5 = (short)-18887;
unsigned int var_8 = 901791991U;
int zero = 0;
short var_12 = (short)27224;
long long int var_13 = -9097322626101976642LL;
unsigned short var_14 = (unsigned short)40891;
long long int var_15 = -6731130072159845997LL;
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
