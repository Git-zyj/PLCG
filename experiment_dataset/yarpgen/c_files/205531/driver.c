#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)68;
unsigned short var_13 = (unsigned short)43850;
_Bool var_14 = (_Bool)0;
int var_15 = -188091779;
int zero = 0;
unsigned short var_20 = (unsigned short)13450;
_Bool var_21 = (_Bool)1;
long long int var_22 = 4540984472707979346LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
