#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
signed char var_5 = (signed char)11;
unsigned long long int var_7 = 2025282391886234306ULL;
_Bool var_12 = (_Bool)1;
int zero = 0;
long long int var_14 = 6714537849241621816LL;
unsigned int var_15 = 3264680129U;
long long int var_16 = 6189050218944632335LL;
void init() {
}

void checksum() {
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
