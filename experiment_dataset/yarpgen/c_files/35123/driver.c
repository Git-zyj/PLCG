#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 3200468491415391237ULL;
_Bool var_5 = (_Bool)1;
long long int var_7 = -2289542589646063678LL;
short var_8 = (short)24487;
int zero = 0;
short var_10 = (short)9988;
unsigned long long int var_11 = 13450326503942891783ULL;
signed char var_12 = (signed char)-73;
unsigned short var_13 = (unsigned short)37239;
long long int var_14 = 3207803466250962398LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
