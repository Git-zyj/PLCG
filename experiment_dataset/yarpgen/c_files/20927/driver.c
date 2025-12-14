#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 162508612U;
unsigned char var_2 = (unsigned char)156;
int var_3 = 854962753;
int var_7 = -1870387224;
int var_8 = -75059624;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned char var_10 = (unsigned char)184;
unsigned long long int var_11 = 15632031339739337204ULL;
signed char var_12 = (signed char)31;
unsigned long long int arr_1 [21] [21] ;
_Bool arr_4 [24] [24] ;
long long int arr_5 [24] ;
unsigned int arr_2 [21] ;
int arr_3 [21] ;
unsigned int arr_6 [24] [24] ;
unsigned int arr_7 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = 3656888048822651279ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = 2926899505622274739LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 2073424737U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = -1021974174;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? 1328933798U : 4249918439U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 3010116442U : 2599537167U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
