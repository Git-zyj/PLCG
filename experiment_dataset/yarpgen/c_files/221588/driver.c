#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 126461650;
unsigned long long int var_2 = 5389106316847344079ULL;
unsigned int var_4 = 1905219931U;
unsigned long long int var_5 = 1620976734542021639ULL;
signed char var_8 = (signed char)(-127 - 1);
unsigned long long int var_9 = 13241735194278493029ULL;
short var_12 = (short)-6718;
unsigned int var_13 = 2797848827U;
unsigned long long int var_15 = 411901796754359312ULL;
int zero = 0;
short var_16 = (short)-2314;
unsigned long long int var_17 = 11379214587628130630ULL;
unsigned long long int var_18 = 11974672446062619317ULL;
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
