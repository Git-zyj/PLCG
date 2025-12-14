#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -453990220;
_Bool var_2 = (_Bool)1;
long long int var_4 = -4809592236922578654LL;
short var_7 = (short)1255;
int var_9 = 1056497278;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)0;
int zero = 0;
long long int var_15 = 3850899989473972898LL;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 2871213705U;
int var_18 = -497439467;
unsigned int var_19 = 3173174226U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
