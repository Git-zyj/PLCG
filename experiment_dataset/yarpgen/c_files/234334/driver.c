#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)42;
short var_4 = (short)17506;
long long int var_10 = -6610201860881411305LL;
int zero = 0;
_Bool var_12 = (_Bool)1;
long long int var_13 = -234631281935950560LL;
unsigned long long int var_14 = 4149764873624793691ULL;
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
