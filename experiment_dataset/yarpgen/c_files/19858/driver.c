#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)40;
unsigned short var_7 = (unsigned short)24912;
int var_8 = -436450796;
short var_11 = (short)6830;
unsigned int var_12 = 1307742842U;
unsigned long long int var_14 = 15522752205357859554ULL;
int zero = 0;
signed char var_16 = (signed char)23;
unsigned int var_17 = 855476942U;
unsigned short var_18 = (unsigned short)61002;
int var_19 = -562238016;
short var_20 = (short)-19236;
_Bool var_21 = (_Bool)0;
int arr_0 [12] ;
long long int arr_1 [12] [12] ;
unsigned int arr_2 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 735777179;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = 2918196001939792290LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 983017351U;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
