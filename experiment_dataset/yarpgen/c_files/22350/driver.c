#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 9932397566206196052ULL;
unsigned short var_5 = (unsigned short)6368;
_Bool var_6 = (_Bool)0;
int zero = 0;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)-94;
_Bool var_19 = (_Bool)1;
short var_20 = (short)8462;
unsigned char var_21 = (unsigned char)134;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
