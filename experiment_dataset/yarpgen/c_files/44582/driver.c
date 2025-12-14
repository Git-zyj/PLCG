#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
short var_2 = (short)-6508;
long long int var_13 = -4785637844254567145LL;
_Bool var_15 = (_Bool)0;
int var_16 = -979824254;
unsigned long long int var_17 = 5197367267493748440ULL;
int zero = 0;
unsigned int var_18 = 699789986U;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)104;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
