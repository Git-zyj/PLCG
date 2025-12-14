#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2767874428796280307LL;
unsigned int var_1 = 2107682829U;
short var_3 = (short)14602;
short var_10 = (short)2283;
int zero = 0;
unsigned char var_13 = (unsigned char)74;
unsigned long long int var_14 = 14163133028271492011ULL;
short var_15 = (short)19814;
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
