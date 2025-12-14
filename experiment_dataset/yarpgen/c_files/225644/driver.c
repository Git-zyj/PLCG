#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8595148794941075110LL;
short var_2 = (short)29715;
signed char var_11 = (signed char)7;
short var_13 = (short)4876;
short var_15 = (short)15287;
int zero = 0;
_Bool var_16 = (_Bool)0;
long long int var_17 = 3020467768427418858LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
