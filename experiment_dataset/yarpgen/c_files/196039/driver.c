#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)120;
unsigned long long int var_11 = 4555482308946641569ULL;
int zero = 0;
long long int var_13 = 3607857477057081365LL;
unsigned short var_14 = (unsigned short)39196;
long long int var_15 = -4983915201443985994LL;
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
