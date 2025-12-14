#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)9568;
int var_3 = -2093551372;
long long int var_4 = -8497066801950871129LL;
unsigned long long int var_5 = 13933870802610791863ULL;
signed char var_6 = (signed char)-43;
long long int var_7 = 4632189553233888122LL;
unsigned long long int var_8 = 2065837467485751554ULL;
unsigned int var_10 = 3681086741U;
int zero = 0;
unsigned short var_11 = (unsigned short)22943;
unsigned char var_12 = (unsigned char)64;
short var_13 = (short)-31414;
unsigned long long int arr_0 [23] [23] ;
unsigned long long int arr_1 [23] ;
_Bool arr_3 [23] [23] ;
unsigned short arr_4 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = 6407304273910985363ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 4450623451622468989ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)10350 : (unsigned short)52916;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
