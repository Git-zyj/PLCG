#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned short var_3 = (unsigned short)30210;
unsigned short var_4 = (unsigned short)35523;
int var_5 = 727749627;
unsigned short var_6 = (unsigned short)57825;
int var_8 = -202704235;
unsigned int var_9 = 1932682988U;
unsigned short var_10 = (unsigned short)10294;
unsigned short var_11 = (unsigned short)33790;
int var_13 = -2080344719;
int zero = 0;
unsigned int var_14 = 2405686910U;
unsigned char var_15 = (unsigned char)137;
unsigned short arr_2 [25] ;
unsigned char arr_3 [25] ;
int arr_7 [10] ;
int arr_8 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (unsigned short)48390;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (unsigned char)69;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = 1808645875;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_8 [i_0] = -1591388149;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
