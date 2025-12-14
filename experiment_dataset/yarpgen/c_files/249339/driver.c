#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_8 = 628881299;
short var_10 = (short)-20621;
unsigned long long int var_11 = 16475821112664613353ULL;
int zero = 0;
short var_13 = (short)27029;
long long int var_14 = -6854563021714613438LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
