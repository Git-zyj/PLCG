#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-34;
int var_2 = -2096151468;
signed char var_3 = (signed char)95;
signed char var_6 = (signed char)22;
signed char var_7 = (signed char)-64;
_Bool var_8 = (_Bool)0;
int zero = 0;
short var_10 = (short)6760;
short var_11 = (short)6968;
int var_12 = 1146993633;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
