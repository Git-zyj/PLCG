#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)3;
long long int var_5 = -4331804335407640777LL;
unsigned long long int var_10 = 13079083417858970207ULL;
unsigned int var_12 = 4229157812U;
int zero = 0;
int var_15 = -1459409937;
int var_16 = -1256637894;
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
