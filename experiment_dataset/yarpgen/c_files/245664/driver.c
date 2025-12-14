#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1349890140U;
int var_5 = 589193558;
long long int var_7 = -7474038667142234397LL;
unsigned int var_11 = 1557684624U;
int zero = 0;
unsigned long long int var_13 = 6157279997487438794ULL;
int var_14 = 1176466022;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
