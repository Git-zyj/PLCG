#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned short var_2 = (unsigned short)24960;
unsigned char var_3 = (unsigned char)74;
unsigned int var_4 = 1223112098U;
_Bool var_5 = (_Bool)0;
long long int var_7 = -2550888363135889665LL;
int var_8 = 372299255;
unsigned int var_9 = 2740548785U;
long long int var_11 = 768098068482232264LL;
long long int var_16 = 292410862598448053LL;
unsigned long long int var_17 = 4624393577284205794ULL;
int zero = 0;
short var_20 = (short)10021;
unsigned int var_21 = 4293313409U;
unsigned short var_22 = (unsigned short)6014;
unsigned int var_23 = 3624244620U;
signed char var_24 = (signed char)-42;
unsigned long long int var_25 = 14328865081192811197ULL;
signed char var_26 = (signed char)87;
unsigned short arr_1 [18] ;
unsigned long long int arr_2 [18] ;
int arr_3 [18] [18] [18] ;
signed char arr_4 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (unsigned short)4610;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 11963631340434088780ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -109566966 : 2030575438;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (signed char)-25;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
