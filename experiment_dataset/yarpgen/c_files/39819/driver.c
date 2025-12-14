#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)45;
_Bool var_4 = (_Bool)1;
unsigned long long int var_7 = 14458173246072061692ULL;
long long int var_9 = 3357519591345033313LL;
int zero = 0;
long long int var_10 = 2151714676490958758LL;
long long int var_11 = 856889090936623222LL;
unsigned char var_12 = (unsigned char)19;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
