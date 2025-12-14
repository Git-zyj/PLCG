#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_1 = 964197403U;
int var_2 = 591731037;
int var_3 = -273019033;
short var_8 = (short)10748;
short var_9 = (short)9093;
signed char var_11 = (signed char)-78;
int var_12 = 846040152;
signed char var_13 = (signed char)-68;
int zero = 0;
short var_15 = (short)5877;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 144528093U;
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
