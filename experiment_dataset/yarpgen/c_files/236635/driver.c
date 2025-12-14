#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7094804640555774722LL;
short var_6 = (short)2876;
_Bool var_7 = (_Bool)1;
int var_11 = -1651381240;
_Bool var_12 = (_Bool)1;
short var_16 = (short)-31161;
int zero = 0;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)-72;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
