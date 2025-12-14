#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8518060197490506913ULL;
short var_4 = (short)13641;
long long int var_5 = -8505558555119946707LL;
short var_8 = (short)-22391;
int zero = 0;
unsigned long long int var_13 = 4206159998255827929ULL;
int var_14 = -231301273;
unsigned char var_15 = (unsigned char)140;
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
