#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)133;
unsigned char var_4 = (unsigned char)121;
long long int var_6 = -5587940355787608467LL;
_Bool var_11 = (_Bool)0;
signed char var_13 = (signed char)-54;
short var_14 = (short)5636;
unsigned short var_17 = (unsigned short)10052;
int zero = 0;
int var_20 = 1634701363;
long long int var_21 = -4055311155205880237LL;
long long int var_22 = 8548154120936758531LL;
unsigned int var_23 = 1559131555U;
unsigned int var_24 = 1799219053U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
