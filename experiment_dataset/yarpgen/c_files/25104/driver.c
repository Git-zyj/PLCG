#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 290108837U;
unsigned short var_4 = (unsigned short)27687;
long long int var_7 = -7370789653065601793LL;
int var_10 = 739509226;
signed char var_11 = (signed char)71;
signed char var_12 = (signed char)33;
int zero = 0;
unsigned int var_16 = 1341805357U;
signed char var_17 = (signed char)-104;
int var_18 = -623606030;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
