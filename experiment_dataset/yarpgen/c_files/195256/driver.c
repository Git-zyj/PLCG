#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_8 = (_Bool)1;
unsigned int var_14 = 2048067001U;
unsigned int var_15 = 823176828U;
signed char var_18 = (signed char)-92;
int zero = 0;
short var_19 = (short)19697;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 1502027996U;
long long int var_22 = -4832228081689414LL;
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
