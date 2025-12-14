#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 445507667;
unsigned long long int var_5 = 3324500994235675171ULL;
short var_6 = (short)-15064;
int var_9 = -1063423822;
long long int var_10 = 6505723247835982382LL;
unsigned long long int var_12 = 16613171046767134386ULL;
int zero = 0;
unsigned int var_14 = 2308474873U;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)37579;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
