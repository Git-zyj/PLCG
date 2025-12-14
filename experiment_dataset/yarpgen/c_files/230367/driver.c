#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 971769506;
long long int var_5 = -5564147112031295238LL;
long long int var_7 = -6582679563181670935LL;
unsigned char var_8 = (unsigned char)196;
int zero = 0;
signed char var_14 = (signed char)100;
short var_15 = (short)6032;
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
