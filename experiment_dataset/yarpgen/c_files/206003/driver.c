#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_6 = -6769651290973541416LL;
unsigned char var_7 = (unsigned char)64;
signed char var_14 = (signed char)-42;
int zero = 0;
short var_16 = (short)-16490;
long long int var_17 = -6694428361956602933LL;
long long int var_18 = 920376769168456787LL;
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
