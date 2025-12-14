#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)113;
short var_4 = (short)-22474;
unsigned long long int var_5 = 3269826296123173094ULL;
unsigned long long int var_7 = 6717807072247073746ULL;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned int var_13 = 187019430U;
unsigned long long int var_14 = 7698595757223326557ULL;
short var_15 = (short)6771;
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
