#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -549930341385390946LL;
unsigned short var_4 = (unsigned short)58615;
long long int var_7 = 3176945143210649826LL;
unsigned short var_8 = (unsigned short)56131;
int zero = 0;
signed char var_13 = (signed char)0;
unsigned short var_14 = (unsigned short)6732;
unsigned int var_15 = 1674352127U;
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
