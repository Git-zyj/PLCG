#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 11222897;
_Bool var_9 = (_Bool)1;
int var_10 = 2010953783;
signed char var_12 = (signed char)34;
signed char var_13 = (signed char)117;
int zero = 0;
short var_14 = (short)-31868;
unsigned short var_15 = (unsigned short)27577;
int var_16 = -924517836;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
