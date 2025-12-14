#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-66;
_Bool var_3 = (_Bool)0;
unsigned long long int var_5 = 1262813382384768766ULL;
unsigned char var_15 = (unsigned char)86;
int zero = 0;
short var_19 = (short)6959;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)0;
unsigned short var_22 = (unsigned short)61942;
unsigned long long int var_23 = 5073150990287021647ULL;
_Bool arr_0 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
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
