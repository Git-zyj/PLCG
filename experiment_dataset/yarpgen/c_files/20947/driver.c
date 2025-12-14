#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)118;
_Bool var_5 = (_Bool)0;
long long int var_10 = -8115430975013822117LL;
unsigned short var_11 = (unsigned short)64702;
unsigned short var_12 = (unsigned short)20041;
int zero = 0;
unsigned short var_14 = (unsigned short)14814;
_Bool var_15 = (_Bool)0;
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
