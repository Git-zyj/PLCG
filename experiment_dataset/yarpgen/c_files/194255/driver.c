#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-9857;
signed char var_3 = (signed char)54;
short var_4 = (short)-16345;
_Bool var_6 = (_Bool)0;
short var_7 = (short)-16814;
unsigned short var_8 = (unsigned short)16947;
_Bool var_12 = (_Bool)1;
int zero = 0;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)1;
short var_21 = (short)28245;
unsigned long long int var_22 = 4234672742786822683ULL;
unsigned short var_23 = (unsigned short)38994;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
