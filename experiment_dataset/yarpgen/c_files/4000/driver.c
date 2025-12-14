#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1923248931;
long long int var_1 = -6578268990373047756LL;
long long int var_8 = -1127063466158626736LL;
unsigned char var_10 = (unsigned char)149;
unsigned short var_13 = (unsigned short)65337;
unsigned short var_15 = (unsigned short)61506;
int zero = 0;
int var_16 = 1022977435;
int var_17 = -1713345744;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
