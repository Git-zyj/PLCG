#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 238773359U;
unsigned int var_2 = 2329085566U;
unsigned int var_3 = 2186613125U;
unsigned int var_7 = 1180333354U;
short var_10 = (short)-31808;
unsigned int var_12 = 2385401227U;
int zero = 0;
signed char var_13 = (signed char)-34;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 3321085081U;
short var_16 = (short)-22120;
unsigned int var_17 = 2120551072U;
signed char arr_0 [12] ;
signed char arr_3 [12] ;
signed char arr_6 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (signed char)-86;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (signed char)-91;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (signed char)-101 : (signed char)-27;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
