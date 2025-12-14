#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)57;
long long int var_5 = -4054764632674006790LL;
short var_11 = (short)-13261;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 3907614699U;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)94;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
