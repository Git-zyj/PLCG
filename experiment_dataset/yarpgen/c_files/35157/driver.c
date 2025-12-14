#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11451563496424681889ULL;
unsigned long long int var_3 = 1057350792494467207ULL;
_Bool var_6 = (_Bool)1;
unsigned long long int var_9 = 4992532605648236594ULL;
unsigned short var_10 = (unsigned short)13186;
unsigned short var_11 = (unsigned short)28428;
int zero = 0;
unsigned int var_15 = 1444794598U;
unsigned short var_16 = (unsigned short)13634;
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
