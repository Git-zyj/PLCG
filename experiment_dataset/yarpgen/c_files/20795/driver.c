#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
unsigned char var_7 = (unsigned char)66;
short var_11 = (short)-7546;
_Bool var_13 = (_Bool)1;
int var_18 = -1268156841;
int zero = 0;
short var_19 = (short)21990;
signed char var_20 = (signed char)67;
short var_21 = (short)-17446;
short var_22 = (short)-15649;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
