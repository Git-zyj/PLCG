#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5193101072979118804LL;
int var_3 = -926532212;
long long int var_7 = 2020624650194175643LL;
signed char var_12 = (signed char)96;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned char var_20 = (unsigned char)171;
long long int var_21 = 1445354625529762097LL;
unsigned short var_22 = (unsigned short)56507;
long long int var_23 = -5631967919598775999LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
