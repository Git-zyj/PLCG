#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8057539329499595685LL;
_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)0;
signed char var_9 = (signed char)70;
long long int var_11 = -7411669352509113871LL;
signed char var_12 = (signed char)-43;
int zero = 0;
long long int var_13 = -2147499948236921640LL;
signed char var_14 = (signed char)-17;
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
