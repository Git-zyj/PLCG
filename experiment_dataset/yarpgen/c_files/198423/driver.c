#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)139;
long long int var_1 = -1011251735259647869LL;
signed char var_2 = (signed char)11;
long long int var_3 = 659157681217586048LL;
short var_4 = (short)-14871;
signed char var_5 = (signed char)-35;
unsigned int var_6 = 4256112819U;
signed char var_7 = (signed char)-57;
_Bool var_8 = (_Bool)1;
unsigned long long int var_9 = 6196312651489765117ULL;
int zero = 0;
unsigned int var_10 = 2862228180U;
int var_11 = 1957621995;
unsigned char var_12 = (unsigned char)28;
long long int var_13 = -8428490507854676906LL;
signed char var_14 = (signed char)42;
_Bool var_15 = (_Bool)0;
long long int var_16 = -63121288612447260LL;
unsigned char var_17 = (unsigned char)49;
unsigned int var_18 = 37596657U;
unsigned char arr_0 [18] ;
_Bool arr_1 [18] ;
short arr_2 [18] ;
int arr_4 [19] ;
int arr_11 [12] ;
unsigned int arr_5 [19] ;
unsigned char arr_8 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (unsigned char)193;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (short)15028;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = -158090192;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_11 [i_0] = 1083900349;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = 2430086716U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned char)64;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
