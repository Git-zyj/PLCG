#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)81;
short var_14 = (short)10044;
_Bool var_15 = (_Bool)1;
long long int var_18 = -1218983063658155909LL;
int zero = 0;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)1;
long long int var_22 = -5744020981179187281LL;
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
