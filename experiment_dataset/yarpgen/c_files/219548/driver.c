#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1045159822;
short var_2 = (short)6957;
signed char var_3 = (signed char)-78;
short var_6 = (short)-1525;
int zero = 0;
unsigned int var_12 = 3403730678U;
short var_13 = (short)-6729;
long long int var_14 = 4862082361351320898LL;
_Bool var_15 = (_Bool)1;
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
