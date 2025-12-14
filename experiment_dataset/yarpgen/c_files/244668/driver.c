#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_1 = (signed char)92;
signed char var_7 = (signed char)-80;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned short var_16 = (unsigned short)62632;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 2440222795U;
_Bool var_19 = (_Bool)0;
short var_20 = (short)-7732;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
