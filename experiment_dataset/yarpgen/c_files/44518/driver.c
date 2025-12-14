#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3681239896181528913LL;
int var_1 = -1252181034;
signed char var_4 = (signed char)-7;
unsigned char var_5 = (unsigned char)200;
short var_10 = (short)27525;
int zero = 0;
signed char var_11 = (signed char)47;
unsigned long long int var_12 = 10147764626953312744ULL;
long long int var_13 = 8248097810952575077LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
