#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_2 = (signed char)-109;
short var_3 = (short)14097;
unsigned int var_4 = 591489837U;
unsigned int var_9 = 1377754547U;
unsigned int var_10 = 3824315927U;
unsigned int var_12 = 910338516U;
int zero = 0;
signed char var_16 = (signed char)-124;
_Bool var_17 = (_Bool)1;
long long int var_18 = 847968405889476298LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
