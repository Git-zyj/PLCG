#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3116215032U;
short var_1 = (short)15953;
short var_6 = (short)7515;
long long int var_13 = 8259355702380622203LL;
unsigned short var_18 = (unsigned short)3438;
int zero = 0;
unsigned long long int var_20 = 14620979650317605024ULL;
int var_21 = 1888982671;
_Bool var_22 = (_Bool)0;
unsigned short var_23 = (unsigned short)36379;
unsigned short var_24 = (unsigned short)3333;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
