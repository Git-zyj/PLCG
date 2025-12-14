#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 3308190392U;
signed char var_8 = (signed char)124;
unsigned int var_9 = 1881253867U;
unsigned short var_10 = (unsigned short)14072;
unsigned int var_11 = 290331942U;
short var_12 = (short)8649;
_Bool var_14 = (_Bool)1;
int zero = 0;
long long int var_17 = -6647209299569419312LL;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 282433947U;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)2418;
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
