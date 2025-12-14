#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1379460312457865391LL;
_Bool var_1 = (_Bool)1;
_Bool var_8 = (_Bool)1;
unsigned long long int var_10 = 7444971793463482739ULL;
signed char var_13 = (signed char)89;
unsigned char var_14 = (unsigned char)30;
int var_15 = 1494154452;
int zero = 0;
unsigned char var_18 = (unsigned char)172;
short var_19 = (short)-29198;
unsigned char var_20 = (unsigned char)28;
long long int var_21 = 8417860138380217821LL;
short var_22 = (short)-20645;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
