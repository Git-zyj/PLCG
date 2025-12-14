#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6710127023302683054LL;
long long int var_2 = 456484253808178014LL;
int var_5 = 1561181197;
_Bool var_6 = (_Bool)1;
int zero = 0;
short var_15 = (short)4332;
signed char var_16 = (signed char)102;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
