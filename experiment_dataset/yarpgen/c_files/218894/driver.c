#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)62742;
unsigned long long int var_2 = 16619897780715437629ULL;
unsigned short var_7 = (unsigned short)19114;
int zero = 0;
short var_15 = (short)13319;
unsigned long long int var_16 = 14701623344024064293ULL;
int var_17 = -1125697196;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
