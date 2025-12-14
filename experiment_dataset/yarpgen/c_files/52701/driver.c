#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -2098538338;
unsigned int var_2 = 3136311694U;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 7950352177882069315ULL;
int zero = 0;
unsigned long long int var_14 = 14243421985888463672ULL;
unsigned short var_15 = (unsigned short)19916;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 12541586440585121302ULL;
unsigned int var_18 = 1756810214U;
signed char arr_1 [23] ;
unsigned char arr_2 [23] ;
unsigned long long int arr_3 [23] ;
unsigned int arr_4 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (signed char)-106;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (unsigned char)161;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 13153198304126292633ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = 1263479014U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
