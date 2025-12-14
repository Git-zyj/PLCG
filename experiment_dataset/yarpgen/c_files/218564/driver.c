#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)110;
long long int var_10 = -8386992895649242530LL;
long long int var_13 = -4735232618042495647LL;
_Bool var_16 = (_Bool)1;
int zero = 0;
short var_18 = (short)-17832;
_Bool var_19 = (_Bool)1;
long long int var_20 = -2160889822828150235LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
