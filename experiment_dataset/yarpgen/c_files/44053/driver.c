#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)123;
short var_1 = (short)-23928;
_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)1;
signed char var_6 = (signed char)-58;
unsigned long long int var_8 = 4709393028435833058ULL;
int zero = 0;
unsigned char var_10 = (unsigned char)181;
int var_11 = -2107414431;
_Bool var_12 = (_Bool)0;
int arr_1 [12] [12] ;
short arr_2 [12] ;
signed char arr_5 [12] ;
signed char arr_6 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = -139493922;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (short)21646;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (signed char)-52 : (signed char)-88;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (signed char)-114 : (signed char)-105;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
