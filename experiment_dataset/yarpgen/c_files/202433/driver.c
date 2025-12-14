#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 507248269;
_Bool var_5 = (_Bool)1;
long long int var_7 = -7371037792655847666LL;
short var_8 = (short)-21531;
int zero = 0;
signed char var_13 = (signed char)-32;
signed char var_14 = (signed char)-57;
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
