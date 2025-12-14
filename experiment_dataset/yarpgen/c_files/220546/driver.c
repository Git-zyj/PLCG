#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1803772113;
int var_3 = 985860764;
long long int var_5 = 3685094768411243451LL;
unsigned long long int var_10 = 9959830279394220840ULL;
int zero = 0;
int var_12 = -2095966457;
signed char var_13 = (signed char)28;
unsigned char var_14 = (unsigned char)106;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
