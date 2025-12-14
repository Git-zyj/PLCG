#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7206596993044418045LL;
unsigned char var_2 = (unsigned char)243;
_Bool var_3 = (_Bool)0;
unsigned char var_12 = (unsigned char)86;
int zero = 0;
int var_13 = -838582690;
short var_14 = (short)-11725;
short var_15 = (short)-30737;
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
