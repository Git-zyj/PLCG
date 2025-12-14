#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 983460783;
_Bool var_10 = (_Bool)0;
short var_12 = (short)14307;
signed char var_15 = (signed char)119;
int zero = 0;
long long int var_19 = 450480954332707154LL;
signed char var_20 = (signed char)51;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
