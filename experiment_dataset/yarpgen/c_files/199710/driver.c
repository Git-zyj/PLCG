#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)55497;
_Bool var_6 = (_Bool)1;
unsigned long long int var_8 = 10258249721805283760ULL;
long long int var_9 = -3605684058037348153LL;
unsigned long long int var_12 = 9440244803942588556ULL;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)25;
long long int var_15 = -5888204706742203656LL;
int zero = 0;
signed char var_18 = (signed char)71;
unsigned long long int var_19 = 6367200735876460656ULL;
signed char var_20 = (signed char)-43;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
