#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
long long int var_3 = 1404666921160347987LL;
_Bool var_6 = (_Bool)0;
_Bool var_8 = (_Bool)1;
unsigned int var_11 = 2373927033U;
short var_15 = (short)24173;
int var_16 = -661066891;
unsigned short var_18 = (unsigned short)25407;
int zero = 0;
short var_20 = (short)12211;
signed char var_21 = (signed char)77;
long long int var_22 = -7556445996827806659LL;
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
