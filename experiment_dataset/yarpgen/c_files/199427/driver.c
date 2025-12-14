#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)22590;
unsigned int var_4 = 1739167436U;
_Bool var_6 = (_Bool)0;
unsigned long long int var_14 = 3428063590203035031ULL;
short var_15 = (short)-19596;
int zero = 0;
unsigned int var_16 = 1816270752U;
long long int var_17 = -3098163095327897539LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
