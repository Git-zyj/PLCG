#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7458151932220202372LL;
short var_1 = (short)23459;
int var_11 = -39348559;
signed char var_12 = (signed char)-117;
signed char var_15 = (signed char)-11;
int zero = 0;
signed char var_16 = (signed char)-74;
long long int var_17 = -7976748263759701078LL;
_Bool var_18 = (_Bool)0;
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
