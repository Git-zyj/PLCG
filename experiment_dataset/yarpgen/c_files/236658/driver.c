#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 1268106050;
short var_6 = (short)-7795;
_Bool var_11 = (_Bool)1;
int var_12 = 813173649;
short var_14 = (short)11217;
int var_17 = 163792278;
signed char var_18 = (signed char)88;
int zero = 0;
long long int var_20 = -4111949293383385880LL;
unsigned long long int var_21 = 11104700788528005371ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
