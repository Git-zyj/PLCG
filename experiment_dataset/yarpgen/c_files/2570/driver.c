#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)47;
signed char var_1 = (signed char)24;
long long int var_4 = -142223522582791627LL;
unsigned long long int var_5 = 1568110624282028189ULL;
long long int var_6 = -4571222796102511061LL;
_Bool var_8 = (_Bool)0;
int var_9 = 981262493;
int zero = 0;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 2552880120U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
