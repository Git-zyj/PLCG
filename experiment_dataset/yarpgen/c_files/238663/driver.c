#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
short var_2 = (short)-16875;
int var_3 = -650006097;
_Bool var_4 = (_Bool)0;
short var_7 = (short)3992;
_Bool var_8 = (_Bool)1;
short var_9 = (short)-13416;
int var_12 = 1137863888;
int zero = 0;
_Bool var_13 = (_Bool)1;
int var_14 = 321483878;
short var_15 = (short)32660;
_Bool var_16 = (_Bool)0;
short var_17 = (short)-28380;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
