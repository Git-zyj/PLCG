#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_6 = -623765523669218185LL;
unsigned long long int var_8 = 5755546342184112668ULL;
int zero = 0;
short var_11 = (short)23583;
short var_12 = (short)3244;
signed char var_13 = (signed char)-57;
signed char var_14 = (signed char)87;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
