#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 821995220;
unsigned long long int var_4 = 2024995009649377564ULL;
unsigned char var_7 = (unsigned char)239;
unsigned int var_10 = 3290088284U;
short var_12 = (short)24034;
int var_15 = -552959919;
signed char var_16 = (signed char)-101;
int zero = 0;
signed char var_17 = (signed char)-87;
short var_18 = (short)-11047;
unsigned long long int var_19 = 3053241761078304880ULL;
unsigned short var_20 = (unsigned short)6777;
long long int var_21 = 2683545846470223489LL;
long long int arr_0 [15] ;
int arr_1 [15] [15] ;
_Bool arr_2 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 4855246222212906387LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = -779022858;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
