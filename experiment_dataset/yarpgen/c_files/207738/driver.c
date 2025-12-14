#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-1;
int var_1 = 866933101;
signed char var_4 = (signed char)114;
long long int var_5 = 2604598461537502202LL;
long long int var_8 = -1558959535401855572LL;
int var_9 = -484976598;
short var_12 = (short)-831;
int zero = 0;
short var_14 = (short)-10030;
short var_15 = (short)-2064;
void init() {
}

void checksum() {
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
