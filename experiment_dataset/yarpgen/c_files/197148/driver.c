#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_5 = (signed char)-103;
_Bool var_6 = (_Bool)1;
signed char var_8 = (signed char)72;
int zero = 0;
unsigned int var_10 = 3559668614U;
_Bool var_11 = (_Bool)0;
int var_12 = 739382705;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
