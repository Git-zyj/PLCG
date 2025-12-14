#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_1 = 2588027988U;
unsigned int var_5 = 2361548260U;
int var_6 = -1833858560;
signed char var_9 = (signed char)14;
short var_10 = (short)11189;
int var_11 = 716240055;
long long int var_13 = 6759588966258889522LL;
int var_14 = 838563291;
_Bool var_18 = (_Bool)1;
long long int var_19 = -63351467452851596LL;
int zero = 0;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)-22;
_Bool var_22 = (_Bool)0;
short var_23 = (short)28983;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
