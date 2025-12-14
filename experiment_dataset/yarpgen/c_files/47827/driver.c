#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 1864319270006045892LL;
unsigned int var_3 = 1155382902U;
unsigned long long int var_8 = 18209617359930813670ULL;
unsigned short var_9 = (unsigned short)51788;
unsigned long long int var_16 = 14256101651207745064ULL;
int zero = 0;
int var_18 = -632636677;
unsigned char var_19 = (unsigned char)7;
unsigned short var_20 = (unsigned short)46215;
long long int var_21 = 315081228266812205LL;
_Bool var_22 = (_Bool)1;
_Bool var_23 = (_Bool)1;
long long int arr_0 [23] ;
unsigned short arr_2 [23] ;
unsigned long long int arr_3 [23] [23] [23] ;
long long int arr_4 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = -5479270894280128798LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (unsigned short)46074;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 12257061548629483711ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 555443813204936098LL : -430960292002367988LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
