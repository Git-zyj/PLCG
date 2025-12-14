#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
signed char var_5 = (signed char)-80;
short var_7 = (short)9768;
_Bool var_8 = (_Bool)1;
long long int var_11 = -9171308850964590440LL;
short var_12 = (short)-14564;
_Bool var_13 = (_Bool)1;
long long int var_17 = 6962480491533864485LL;
int var_18 = -1365856118;
int zero = 0;
signed char var_20 = (signed char)-98;
short var_21 = (short)-7163;
unsigned short var_22 = (unsigned short)27055;
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
