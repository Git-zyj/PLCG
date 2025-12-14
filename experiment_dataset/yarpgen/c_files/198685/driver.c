#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14915920562356853529ULL;
signed char var_2 = (signed char)100;
unsigned long long int var_14 = 5633978278754071998ULL;
int zero = 0;
_Bool var_20 = (_Bool)0;
short var_21 = (short)-19008;
short var_22 = (short)8961;
void init() {
}

void checksum() {
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
