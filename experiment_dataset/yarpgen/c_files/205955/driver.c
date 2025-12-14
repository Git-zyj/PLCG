#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
int var_6 = 1171473741;
_Bool var_9 = (_Bool)1;
long long int var_10 = -5327068425897924435LL;
int zero = 0;
_Bool var_13 = (_Bool)1;
short var_14 = (short)-23838;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 2671984303U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
