#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2769069320U;
_Bool var_8 = (_Bool)1;
short var_9 = (short)-8392;
long long int var_13 = 7314833425463268618LL;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 11996249752564253386ULL;
void init() {
}

void checksum() {
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
