#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)237;
short var_6 = (short)19191;
_Bool var_7 = (_Bool)1;
long long int var_8 = -7908108236707311261LL;
long long int var_10 = 4937912586611367786LL;
_Bool var_12 = (_Bool)1;
unsigned long long int var_14 = 9888628003680601933ULL;
long long int var_15 = -8321202389116948010LL;
int zero = 0;
unsigned char var_16 = (unsigned char)83;
short var_17 = (short)4077;
_Bool var_18 = (_Bool)0;
unsigned long long int arr_1 [23] [23] ;
unsigned short arr_5 [23] ;
long long int arr_2 [23] ;
int arr_6 [23] ;
int arr_7 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = 17051765976917044602ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned short)31003 : (unsigned short)35052;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 8883049595320380568LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? -1716449182 : 224139932;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? -815956885 : 1434214988;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
