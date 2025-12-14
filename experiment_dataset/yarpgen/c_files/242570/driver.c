#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned int var_4 = 4205644604U;
signed char var_9 = (signed char)-32;
unsigned long long int var_10 = 18179867803543613760ULL;
int zero = 0;
_Bool var_11 = (_Bool)0;
short var_12 = (short)29344;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
