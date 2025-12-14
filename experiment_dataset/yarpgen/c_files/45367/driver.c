#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-115;
short var_11 = (short)3223;
_Bool var_12 = (_Bool)1;
_Bool var_14 = (_Bool)0;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 3034335095U;
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
