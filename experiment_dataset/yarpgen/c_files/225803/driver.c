#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)1;
int var_12 = -957053529;
signed char var_14 = (signed char)103;
int var_16 = -2014508866;
unsigned int var_18 = 1785149941U;
signed char var_19 = (signed char)-98;
int zero = 0;
short var_20 = (short)6879;
_Bool var_21 = (_Bool)1;
int var_22 = 906010389;
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
