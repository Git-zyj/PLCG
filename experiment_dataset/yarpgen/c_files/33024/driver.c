#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
_Bool var_5 = (_Bool)1;
int var_6 = 1961419493;
unsigned long long int var_10 = 6989748051633473376ULL;
int var_13 = 1694107467;
_Bool var_15 = (_Bool)0;
short var_16 = (short)20887;
int var_17 = -132316671;
int zero = 0;
unsigned char var_20 = (unsigned char)102;
short var_21 = (short)25223;
unsigned int var_22 = 3740624611U;
_Bool var_23 = (_Bool)0;
_Bool var_24 = (_Bool)1;
unsigned char var_25 = (unsigned char)65;
_Bool var_26 = (_Bool)0;
signed char var_27 = (signed char)-94;
_Bool arr_1 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
