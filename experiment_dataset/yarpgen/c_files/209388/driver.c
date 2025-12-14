#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2084533636;
unsigned short var_6 = (unsigned short)49434;
_Bool var_9 = (_Bool)0;
unsigned short var_10 = (unsigned short)45781;
int zero = 0;
int var_13 = -2053086123;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 1433216304U;
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
