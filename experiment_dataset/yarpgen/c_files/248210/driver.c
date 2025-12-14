#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
signed char var_6 = (signed char)121;
long long int var_13 = 368602500332628189LL;
unsigned char var_19 = (unsigned char)72;
int zero = 0;
long long int var_20 = -2827771138824887798LL;
long long int var_21 = 5746748888424412115LL;
short var_22 = (short)-28218;
unsigned long long int var_23 = 10475117809679458446ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
