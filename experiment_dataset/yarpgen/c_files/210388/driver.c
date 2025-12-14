#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_1 = 2552086952501545342LL;
long long int var_3 = -6135167252479524621LL;
unsigned long long int var_4 = 4416979044696222916ULL;
unsigned int var_5 = 2579278967U;
long long int var_6 = 6144067332118439495LL;
int var_11 = -885238733;
_Bool var_12 = (_Bool)0;
int zero = 0;
int var_13 = 57038636;
signed char var_14 = (signed char)-33;
signed char var_15 = (signed char)-91;
int var_16 = -2060277192;
signed char var_17 = (signed char)-80;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
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
