#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)58;
long long int var_4 = 610769717848426952LL;
int var_5 = -1187638641;
unsigned int var_6 = 1265420933U;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned int var_14 = 2988931894U;
long long int var_15 = -8477072733092916569LL;
void init() {
}

void checksum() {
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
