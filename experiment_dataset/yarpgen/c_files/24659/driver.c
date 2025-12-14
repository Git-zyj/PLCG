#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14316617563326602649ULL;
unsigned int var_2 = 579982720U;
unsigned short var_3 = (unsigned short)1968;
_Bool var_7 = (_Bool)0;
int zero = 0;
signed char var_13 = (signed char)-59;
signed char var_14 = (signed char)(-127 - 1);
_Bool var_15 = (_Bool)1;
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
