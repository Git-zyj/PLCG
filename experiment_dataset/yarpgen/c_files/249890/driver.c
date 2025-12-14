#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)99;
int var_1 = 281094931;
short var_2 = (short)-13846;
short var_6 = (short)-10356;
_Bool var_8 = (_Bool)1;
int zero = 0;
int var_12 = 1172923881;
int var_13 = -2029584860;
signed char var_14 = (signed char)108;
int var_15 = -1364838405;
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
