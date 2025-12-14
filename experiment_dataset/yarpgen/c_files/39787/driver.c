#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 628312880;
unsigned int var_1 = 1390158592U;
unsigned short var_3 = (unsigned short)6146;
long long int var_4 = 3240662650993075549LL;
unsigned short var_8 = (unsigned short)11339;
unsigned int var_13 = 1736218919U;
int var_16 = 1777794516;
int zero = 0;
signed char var_18 = (signed char)123;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)22303;
long long int var_21 = -8003222573542400476LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
