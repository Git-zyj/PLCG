#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2283795890U;
unsigned int var_1 = 98166168U;
unsigned int var_2 = 331924103U;
unsigned char var_3 = (unsigned char)29;
_Bool var_7 = (_Bool)0;
_Bool var_8 = (_Bool)0;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned long long int var_12 = 9305787385049064532ULL;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 746445990U;
void init() {
}

void checksum() {
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
