#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -9039606158821395195LL;
long long int var_1 = -3862958609037638210LL;
_Bool var_3 = (_Bool)1;
short var_6 = (short)29173;
int var_7 = 2108993452;
signed char var_10 = (signed char)42;
_Bool var_11 = (_Bool)1;
_Bool var_12 = (_Bool)0;
int zero = 0;
signed char var_13 = (signed char)68;
_Bool var_14 = (_Bool)1;
short var_15 = (short)3317;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
