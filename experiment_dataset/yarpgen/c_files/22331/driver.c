#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)20784;
unsigned int var_3 = 2991733858U;
signed char var_6 = (signed char)98;
int zero = 0;
long long int var_15 = 1859557732078630563LL;
unsigned int var_16 = 1723872657U;
short var_17 = (short)3178;
long long int var_18 = -3474648565227811841LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
