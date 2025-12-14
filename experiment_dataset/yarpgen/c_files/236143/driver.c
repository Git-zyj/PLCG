#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_2 = -4869704128360654030LL;
_Bool var_4 = (_Bool)1;
unsigned long long int var_8 = 10227408665348594797ULL;
unsigned int var_9 = 2358900178U;
_Bool var_10 = (_Bool)0;
int zero = 0;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)25;
unsigned int var_14 = 1481112495U;
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
