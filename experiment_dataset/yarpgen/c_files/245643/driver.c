#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4364952761891103075ULL;
unsigned short var_1 = (unsigned short)30651;
unsigned int var_2 = 3944122483U;
int var_3 = 549943078;
_Bool var_5 = (_Bool)1;
short var_8 = (short)-31954;
signed char var_11 = (signed char)39;
int zero = 0;
short var_12 = (short)-29208;
unsigned short var_13 = (unsigned short)13257;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
