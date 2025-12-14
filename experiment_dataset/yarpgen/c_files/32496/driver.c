#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
_Bool var_7 = (_Bool)1;
unsigned int var_8 = 4095363568U;
unsigned short var_13 = (unsigned short)17869;
_Bool var_14 = (_Bool)0;
int var_16 = 764993;
signed char var_18 = (signed char)-2;
int zero = 0;
unsigned int var_20 = 1231151443U;
_Bool var_21 = (_Bool)0;
_Bool var_22 = (_Bool)1;
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
