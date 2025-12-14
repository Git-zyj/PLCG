#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)41165;
long long int var_10 = -2105750714225434482LL;
int zero = 0;
unsigned long long int var_12 = 374762469689038569ULL;
signed char var_13 = (signed char)61;
short var_14 = (short)31901;
long long int var_15 = 2207957169397965190LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
