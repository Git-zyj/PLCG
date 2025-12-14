#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2873199547263658472LL;
signed char var_3 = (signed char)-95;
unsigned short var_9 = (unsigned short)20053;
int zero = 0;
long long int var_11 = 6074030497654797214LL;
short var_12 = (short)-11346;
void init() {
}

void checksum() {
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
