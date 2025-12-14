#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)15665;
short var_12 = (short)-11602;
short var_14 = (short)-24012;
int zero = 0;
_Bool var_15 = (_Bool)1;
long long int var_16 = 1839703993824962073LL;
short var_17 = (short)-3707;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
