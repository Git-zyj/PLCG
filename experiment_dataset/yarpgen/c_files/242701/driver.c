#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-29561;
short var_5 = (short)2426;
_Bool var_6 = (_Bool)0;
_Bool var_8 = (_Bool)0;
_Bool var_11 = (_Bool)0;
short var_12 = (short)9605;
int zero = 0;
short var_13 = (short)4489;
_Bool var_14 = (_Bool)0;
short var_15 = (short)-16251;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
