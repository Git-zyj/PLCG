#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)3;
unsigned short var_8 = (unsigned short)38346;
unsigned int var_16 = 2645286923U;
signed char var_17 = (signed char)69;
_Bool var_18 = (_Bool)1;
int zero = 0;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)83;
unsigned short arr_8 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (unsigned short)42462 : (unsigned short)9480;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
