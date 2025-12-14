#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned int var_4 = 3005831783U;
_Bool var_5 = (_Bool)0;
int var_6 = -113755334;
unsigned short var_10 = (unsigned short)29271;
long long int var_12 = 2529155297720519675LL;
int zero = 0;
unsigned int var_13 = 2543696360U;
short var_14 = (short)-7557;
void init() {
}

void checksum() {
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
