#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)47139;
unsigned int var_2 = 394939605U;
long long int var_7 = 6488422163887554933LL;
_Bool var_9 = (_Bool)1;
int zero = 0;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)0;
short var_14 = (short)-22045;
unsigned short var_15 = (unsigned short)18198;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
