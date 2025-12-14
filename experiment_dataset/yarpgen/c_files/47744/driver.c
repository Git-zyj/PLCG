#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_8 = (_Bool)1;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)50593;
long long int var_14 = 4699367331375401469LL;
long long int var_15 = 6087078903664213669LL;
int zero = 0;
short var_17 = (short)4328;
long long int var_18 = -2581360731721681499LL;
void init() {
}

void checksum() {
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
