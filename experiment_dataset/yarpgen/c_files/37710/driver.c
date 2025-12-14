#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4070108900132434826LL;
long long int var_5 = -2327680911919007235LL;
_Bool var_6 = (_Bool)1;
int zero = 0;
signed char var_10 = (signed char)-113;
long long int var_11 = -6967704307969281309LL;
long long int var_12 = 653401583989792444LL;
long long int var_13 = -4392132861238477888LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
