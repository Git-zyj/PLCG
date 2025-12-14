#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)49;
unsigned int var_3 = 4121113592U;
signed char var_4 = (signed char)-52;
long long int var_5 = 5862036824139953532LL;
long long int var_6 = -2601691186999810482LL;
short var_7 = (short)-31544;
int var_10 = 119374688;
int zero = 0;
long long int var_11 = 596564630932731723LL;
unsigned int var_12 = 1403551338U;
short var_13 = (short)-4415;
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
