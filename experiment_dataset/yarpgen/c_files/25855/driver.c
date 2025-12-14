#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_1 = (short)16884;
short var_2 = (short)30675;
unsigned char var_7 = (unsigned char)68;
unsigned long long int var_8 = 3716026768884442059ULL;
int var_10 = -343313419;
unsigned short var_13 = (unsigned short)33408;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned char var_17 = (unsigned char)59;
long long int var_18 = 628809187295748989LL;
signed char var_19 = (signed char)55;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
