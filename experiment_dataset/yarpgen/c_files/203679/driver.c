#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 672527199U;
unsigned char var_2 = (unsigned char)2;
unsigned int var_5 = 407227042U;
int var_6 = -457681651;
unsigned int var_8 = 3199401004U;
int zero = 0;
unsigned char var_13 = (unsigned char)21;
unsigned int var_14 = 4220227729U;
long long int var_15 = 2352528551118422890LL;
_Bool var_16 = (_Bool)1;
short arr_0 [11] ;
int arr_6 [11] [11] ;
unsigned short arr_14 [19] ;
unsigned char arr_15 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (short)25689;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_6 [i_0] [i_1] = 1371162705;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_14 [i_0] = (unsigned short)52943;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_15 [i_0] = (unsigned char)153;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
