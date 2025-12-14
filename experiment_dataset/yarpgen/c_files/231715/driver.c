#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 862163432;
int var_4 = -1948365909;
unsigned int var_6 = 871604849U;
signed char var_9 = (signed char)60;
int var_12 = 483696080;
int zero = 0;
short var_15 = (short)-31220;
unsigned long long int var_16 = 16755249815826096666ULL;
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
