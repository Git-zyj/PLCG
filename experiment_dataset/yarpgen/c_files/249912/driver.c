#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5525896931528625680ULL;
unsigned char var_2 = (unsigned char)171;
_Bool var_3 = (_Bool)0;
unsigned int var_4 = 1051318424U;
signed char var_5 = (signed char)4;
unsigned int var_8 = 177805479U;
unsigned char var_10 = (unsigned char)161;
int zero = 0;
long long int var_12 = 4704551147535309574LL;
signed char var_13 = (signed char)63;
unsigned short var_14 = (unsigned short)13221;
long long int var_15 = -1417460368333188197LL;
unsigned long long int var_16 = 11872941131406509001ULL;
unsigned short arr_6 [21] [21] ;
unsigned long long int arr_7 [21] ;
unsigned int arr_10 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)26465;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = 5072301005405266189ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_10 [i_0] = 4189341815U;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
