#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2170157548U;
_Bool var_1 = (_Bool)1;
unsigned int var_2 = 1158180368U;
_Bool var_3 = (_Bool)0;
int var_5 = -1663238475;
unsigned int var_6 = 115384026U;
unsigned int var_8 = 1792040885U;
unsigned int var_9 = 884912044U;
signed char var_10 = (signed char)-2;
int zero = 0;
unsigned int var_12 = 1875463686U;
int var_13 = -674795710;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
