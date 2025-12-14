#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1149842701;
long long int var_3 = 6227495683097667963LL;
signed char var_6 = (signed char)14;
_Bool var_8 = (_Bool)0;
long long int var_9 = -7114890658687232891LL;
signed char var_10 = (signed char)101;
int zero = 0;
int var_19 = 1607437888;
short var_20 = (short)-23714;
short var_21 = (short)3000;
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
