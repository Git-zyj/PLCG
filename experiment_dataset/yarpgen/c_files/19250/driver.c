#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7531177056529206254LL;
signed char var_7 = (signed char)29;
_Bool var_8 = (_Bool)1;
_Bool var_9 = (_Bool)1;
short var_10 = (short)-16190;
short var_11 = (short)7331;
int var_12 = 1550540295;
int zero = 0;
signed char var_13 = (signed char)-13;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
