#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_5 = (signed char)127;
long long int var_9 = 5254339692080192561LL;
signed char var_14 = (signed char)44;
short var_18 = (short)11740;
int zero = 0;
unsigned int var_20 = 2024777343U;
_Bool var_21 = (_Bool)1;
unsigned long long int var_22 = 69115642264980615ULL;
signed char var_23 = (signed char)-90;
long long int var_24 = -4293633593868989944LL;
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
