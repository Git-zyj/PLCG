#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7385454803817159059LL;
unsigned int var_3 = 4200567494U;
_Bool var_14 = (_Bool)1;
int zero = 0;
short var_19 = (short)4325;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)-28;
short var_22 = (short)3688;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
