#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2358321550U;
short var_10 = (short)-16624;
int var_11 = 1417011394;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned long long int var_16 = 12610525651755772698ULL;
unsigned int var_17 = 2369740224U;
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
