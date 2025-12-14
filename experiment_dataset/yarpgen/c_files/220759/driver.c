#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 250244663;
int var_3 = -1150622633;
unsigned int var_4 = 3410015773U;
unsigned short var_5 = (unsigned short)24622;
unsigned short var_6 = (unsigned short)13929;
unsigned short var_8 = (unsigned short)38040;
long long int var_10 = 2382628090618426568LL;
int zero = 0;
int var_12 = -1350657697;
_Bool var_13 = (_Bool)1;
unsigned char var_14 = (unsigned char)185;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 1059048588U;
unsigned char var_17 = (unsigned char)53;
unsigned char var_18 = (unsigned char)121;
int arr_1 [20] ;
unsigned short arr_5 [11] ;
long long int arr_2 [20] ;
unsigned int arr_6 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 1255200294;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (unsigned short)46173;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = -6105947321496810986LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = 3061105422U;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
