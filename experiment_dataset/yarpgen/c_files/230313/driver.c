#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7323035667391665928LL;
_Bool var_7 = (_Bool)0;
long long int var_8 = 6663959060832223792LL;
long long int var_10 = 5350763274300213284LL;
int zero = 0;
signed char var_14 = (signed char)122;
unsigned short var_15 = (unsigned short)4023;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
