#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2820171376U;
unsigned short var_3 = (unsigned short)24042;
short var_4 = (short)10806;
_Bool var_5 = (_Bool)1;
long long int var_6 = 2906672281157620817LL;
unsigned long long int var_9 = 16491514887404849259ULL;
unsigned long long int var_12 = 17869557483695287009ULL;
short var_14 = (short)-23852;
signed char var_15 = (signed char)119;
long long int var_16 = -3090667592671158959LL;
int zero = 0;
unsigned int var_19 = 1504066873U;
unsigned long long int var_20 = 2175497557008550676ULL;
long long int var_21 = 6179067676699565226LL;
unsigned int var_22 = 2406863560U;
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
