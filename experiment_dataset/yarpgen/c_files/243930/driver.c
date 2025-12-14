#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)22;
short var_1 = (short)26419;
_Bool var_2 = (_Bool)1;
long long int var_7 = 6662784032595224925LL;
long long int var_9 = 8905663501253218191LL;
_Bool var_14 = (_Bool)1;
int zero = 0;
short var_19 = (short)15882;
int var_20 = 579061064;
short var_21 = (short)10070;
unsigned int var_22 = 3413356750U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
