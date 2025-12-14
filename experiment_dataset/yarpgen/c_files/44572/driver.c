#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1211504046;
short var_1 = (short)-17571;
long long int var_5 = 4784862375689737302LL;
long long int var_12 = 6032318059684175406LL;
int zero = 0;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)-14;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
