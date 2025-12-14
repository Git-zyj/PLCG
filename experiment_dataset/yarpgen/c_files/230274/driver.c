#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)17356;
int var_5 = -1030979909;
unsigned int var_12 = 2651399961U;
unsigned int var_14 = 2676973090U;
int zero = 0;
signed char var_16 = (signed char)-20;
unsigned long long int var_17 = 7041724559286330807ULL;
short var_18 = (short)10774;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
