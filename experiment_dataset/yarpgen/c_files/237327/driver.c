#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2030361636;
unsigned int var_1 = 3363215754U;
unsigned short var_2 = (unsigned short)59989;
unsigned int var_4 = 3643099290U;
signed char var_9 = (signed char)-13;
long long int var_13 = 7978039148536076564LL;
_Bool var_15 = (_Bool)0;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 519732717U;
unsigned short var_18 = (unsigned short)55647;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
