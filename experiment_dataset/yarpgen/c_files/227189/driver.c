#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1613335562;
long long int var_2 = 2053801425490524133LL;
unsigned short var_6 = (unsigned short)51958;
unsigned short var_9 = (unsigned short)3379;
signed char var_11 = (signed char)-34;
unsigned short var_13 = (unsigned short)59455;
int zero = 0;
short var_14 = (short)25258;
long long int var_15 = -1193866911575605498LL;
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
