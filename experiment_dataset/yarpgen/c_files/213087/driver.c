#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1693946845U;
_Bool var_8 = (_Bool)0;
signed char var_11 = (signed char)84;
long long int var_13 = -687530112491041165LL;
long long int var_14 = 601464261148889372LL;
int zero = 0;
unsigned long long int var_15 = 11334194616902324892ULL;
short var_16 = (short)13142;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
