#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned short var_6 = (unsigned short)50978;
long long int var_7 = 4709641422325701208LL;
unsigned int var_11 = 741823490U;
signed char var_13 = (signed char)(-127 - 1);
int zero = 0;
unsigned int var_14 = 1970695083U;
short var_15 = (short)4117;
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
