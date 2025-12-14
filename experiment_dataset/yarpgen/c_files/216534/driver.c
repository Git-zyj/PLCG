#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_4 = (short)-20059;
signed char var_7 = (signed char)-59;
unsigned long long int var_14 = 166935221033707611ULL;
_Bool var_16 = (_Bool)1;
int zero = 0;
signed char var_19 = (signed char)17;
unsigned int var_20 = 2500757725U;
long long int var_21 = 1250527995269497652LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
