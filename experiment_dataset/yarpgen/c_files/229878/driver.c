#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -8207463656981029850LL;
signed char var_7 = (signed char)107;
_Bool var_14 = (_Bool)0;
long long int var_17 = 5062244223463672304LL;
int zero = 0;
unsigned long long int var_18 = 4799803258873867563ULL;
signed char var_19 = (signed char)-105;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
