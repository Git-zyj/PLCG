#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)2;
unsigned int var_10 = 2382790396U;
int var_11 = -2075337647;
unsigned int var_14 = 139028046U;
_Bool var_16 = (_Bool)1;
short var_18 = (short)24350;
int zero = 0;
signed char var_19 = (signed char)-107;
long long int var_20 = 1628018119110838114LL;
short var_21 = (short)14765;
void init() {
}

void checksum() {
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
