#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)0;
short var_7 = (short)7892;
signed char var_9 = (signed char)13;
signed char var_10 = (signed char)(-127 - 1);
unsigned char var_11 = (unsigned char)65;
int zero = 0;
unsigned char var_12 = (unsigned char)120;
unsigned char var_13 = (unsigned char)87;
long long int var_14 = -3719010081648893868LL;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)-54;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
