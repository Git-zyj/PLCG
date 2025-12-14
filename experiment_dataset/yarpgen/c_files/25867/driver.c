#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)122;
unsigned short var_11 = (unsigned short)30534;
short var_14 = (short)-20251;
int zero = 0;
signed char var_20 = (signed char)19;
_Bool var_21 = (_Bool)0;
unsigned long long int var_22 = 10818115512900623354ULL;
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
