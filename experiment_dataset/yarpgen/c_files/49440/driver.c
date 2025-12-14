#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
long long int var_2 = 8173697437219947928LL;
unsigned char var_5 = (unsigned char)181;
unsigned char var_6 = (unsigned char)174;
signed char var_7 = (signed char)56;
signed char var_8 = (signed char)-70;
_Bool var_9 = (_Bool)1;
unsigned char var_10 = (unsigned char)226;
unsigned char var_12 = (unsigned char)198;
short var_13 = (short)26353;
short var_14 = (short)6049;
int var_15 = 1457599626;
int zero = 0;
unsigned char var_16 = (unsigned char)45;
unsigned long long int var_17 = 15466616388426429095ULL;
unsigned char var_18 = (unsigned char)56;
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
