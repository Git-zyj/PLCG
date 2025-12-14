#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
long long int var_3 = 7899952422940107162LL;
short var_4 = (short)12243;
unsigned long long int var_5 = 10002652970462576923ULL;
long long int var_7 = -3576688169707207566LL;
signed char var_11 = (signed char)-85;
int zero = 0;
unsigned short var_17 = (unsigned short)43073;
unsigned int var_18 = 2894070459U;
void init() {
}

void checksum() {
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
