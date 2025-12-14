#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 886200175154983092ULL;
unsigned char var_7 = (unsigned char)83;
int zero = 0;
long long int var_13 = 9029142481975686242LL;
_Bool var_14 = (_Bool)0;
long long int var_15 = -3884274524131079083LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
