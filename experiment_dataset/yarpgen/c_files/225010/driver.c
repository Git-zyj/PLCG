#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)121;
unsigned char var_1 = (unsigned char)126;
long long int var_6 = -2361110565832851248LL;
signed char var_13 = (signed char)-89;
unsigned char var_15 = (unsigned char)238;
signed char var_16 = (signed char)115;
signed char var_19 = (signed char)37;
int zero = 0;
signed char var_20 = (signed char)95;
_Bool var_21 = (_Bool)0;
unsigned char var_22 = (unsigned char)32;
_Bool var_23 = (_Bool)1;
long long int arr_0 [25] ;
_Bool arr_10 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 8907246529622233816LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
