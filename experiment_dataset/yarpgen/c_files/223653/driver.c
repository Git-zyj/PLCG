#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-73;
signed char var_3 = (signed char)-47;
_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)0;
_Bool var_9 = (_Bool)1;
short var_10 = (short)30369;
signed char var_11 = (signed char)-79;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 4638364618183308606ULL;
int zero = 0;
_Bool var_14 = (_Bool)0;
int var_15 = 740974923;
int var_16 = -115487558;
void init() {
}

void checksum() {
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
