#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14790588813088539269ULL;
int var_3 = -1823918413;
int var_4 = -1550304741;
_Bool var_6 = (_Bool)1;
signed char var_7 = (signed char)-1;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 2526506195942171017ULL;
long long int var_13 = -1532129665939442471LL;
_Bool var_15 = (_Bool)0;
short var_16 = (short)26521;
short var_17 = (short)11523;
unsigned long long int var_19 = 14329020617476137287ULL;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 11720083943715490593ULL;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
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
