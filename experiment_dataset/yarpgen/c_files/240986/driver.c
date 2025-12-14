#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)66;
signed char var_4 = (signed char)85;
_Bool var_5 = (_Bool)0;
signed char var_7 = (signed char)-76;
_Bool var_8 = (_Bool)1;
signed char var_12 = (signed char)126;
signed char var_14 = (signed char)-32;
signed char var_15 = (signed char)10;
_Bool var_16 = (_Bool)1;
_Bool var_19 = (_Bool)1;
int zero = 0;
signed char var_20 = (signed char)22;
signed char var_21 = (signed char)-51;
signed char arr_0 [23] ;
_Bool arr_4 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (signed char)-79;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
