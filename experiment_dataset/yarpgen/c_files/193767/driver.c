#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)6467;
long long int var_1 = 8061338485802348946LL;
_Bool var_3 = (_Bool)1;
int zero = 0;
signed char var_12 = (signed char)68;
long long int var_13 = -5451114411924947571LL;
unsigned int var_14 = 965602556U;
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
