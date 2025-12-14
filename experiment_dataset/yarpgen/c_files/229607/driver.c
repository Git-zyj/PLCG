#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_7 = 7615881913015772454LL;
int var_9 = 648777363;
_Bool var_10 = (_Bool)0;
int zero = 0;
signed char var_14 = (signed char)35;
long long int var_15 = -5441343105693366393LL;
short var_16 = (short)19118;
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
