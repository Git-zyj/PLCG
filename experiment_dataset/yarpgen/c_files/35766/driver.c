#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)1;
signed char var_3 = (signed char)-13;
unsigned int var_5 = 3284998116U;
short var_7 = (short)-7374;
int zero = 0;
unsigned int var_10 = 1171622206U;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 185224704U;
unsigned long long int var_13 = 13577626657874999337ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
