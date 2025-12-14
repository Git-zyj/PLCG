#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_1 = 4872240410669325470LL;
_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)1;
unsigned int var_9 = 3959066718U;
unsigned long long int var_10 = 7628250620673062025ULL;
long long int var_11 = -6430527712249744143LL;
signed char var_12 = (signed char)-113;
signed char var_14 = (signed char)-67;
short var_15 = (short)18124;
int zero = 0;
unsigned long long int var_16 = 6564412432323468167ULL;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 10162787160635483734ULL;
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
