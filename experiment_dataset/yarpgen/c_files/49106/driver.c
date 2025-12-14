#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_4 = (signed char)56;
_Bool var_7 = (_Bool)0;
long long int var_8 = 1819904913415452134LL;
unsigned long long int var_16 = 3389393229511058573ULL;
int zero = 0;
short var_19 = (short)19439;
short var_20 = (short)7469;
long long int var_21 = -6400552112551827617LL;
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
