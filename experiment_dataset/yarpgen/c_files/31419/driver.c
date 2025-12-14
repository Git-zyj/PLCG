#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1929039275;
short var_2 = (short)-3464;
signed char var_7 = (signed char)-65;
int var_8 = 1418767038;
long long int var_11 = -5995423075470242043LL;
int zero = 0;
unsigned long long int var_12 = 13568606087784760021ULL;
unsigned short var_13 = (unsigned short)30330;
void init() {
}

void checksum() {
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
