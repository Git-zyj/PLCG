#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 376347208490818655ULL;
signed char var_1 = (signed char)23;
short var_2 = (short)-27738;
long long int var_3 = 1462598993032346892LL;
_Bool var_4 = (_Bool)1;
unsigned char var_6 = (unsigned char)47;
long long int var_7 = 2498245068891785930LL;
unsigned long long int var_8 = 8825301607396615623ULL;
int var_9 = -666767570;
short var_10 = (short)2729;
_Bool var_11 = (_Bool)1;
unsigned char var_12 = (unsigned char)218;
int zero = 0;
signed char var_13 = (signed char)36;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 13917834223980737102ULL;
_Bool var_16 = (_Bool)1;
_Bool arr_0 [10] ;
signed char arr_1 [10] [10] ;
unsigned char arr_2 [10] ;
long long int arr_6 [10] [10] ;
signed char arr_9 [10] [10] ;
unsigned long long int arr_10 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)24;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (unsigned char)60;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_6 [i_0] [i_1] = 5246615106132182192LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_9 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)13 : (signed char)91;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_10 [i_0] [i_1] = (i_0 % 2 == 0) ? 14401462904594970344ULL : 15888276248809735947ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
