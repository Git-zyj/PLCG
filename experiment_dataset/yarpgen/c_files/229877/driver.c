#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_1 = (short)-19943;
_Bool var_2 = (_Bool)1;
unsigned short var_3 = (unsigned short)54617;
_Bool var_4 = (_Bool)1;
signed char var_7 = (signed char)-116;
unsigned int var_8 = 115446446U;
int zero = 0;
int var_10 = 1309674732;
unsigned int var_11 = 1075517349U;
short var_12 = (short)-28410;
unsigned int var_13 = 2240605609U;
unsigned int var_14 = 2893662158U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
