#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-31;
signed char var_2 = (signed char)-86;
_Bool var_6 = (_Bool)0;
_Bool var_8 = (_Bool)1;
_Bool var_10 = (_Bool)0;
int var_12 = 1548081320;
signed char var_13 = (signed char)93;
unsigned short var_14 = (unsigned short)37782;
unsigned short var_15 = (unsigned short)37200;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 10558163879615377586ULL;
int zero = 0;
signed char var_19 = (signed char)62;
short var_20 = (short)-6241;
short var_21 = (short)-25979;
signed char var_22 = (signed char)-102;
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
