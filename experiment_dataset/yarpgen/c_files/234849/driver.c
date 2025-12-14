#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 9536696396898843224ULL;
unsigned char var_3 = (unsigned char)77;
short var_5 = (short)15388;
short var_7 = (short)-11712;
long long int var_9 = -1707675586162975873LL;
short var_10 = (short)28293;
unsigned char var_14 = (unsigned char)219;
int zero = 0;
short var_15 = (short)8115;
short var_16 = (short)-32022;
void init() {
}

void checksum() {
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
