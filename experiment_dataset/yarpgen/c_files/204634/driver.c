#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_9 = (_Bool)1;
unsigned long long int var_12 = 15862117576594888054ULL;
int zero = 0;
unsigned long long int var_13 = 12565038157291272239ULL;
int var_14 = 1509936687;
signed char var_15 = (signed char)-53;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
