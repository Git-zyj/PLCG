#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)25235;
unsigned long long int var_7 = 11756656325091975478ULL;
unsigned long long int var_8 = 8130679545853137189ULL;
signed char var_9 = (signed char)-11;
signed char var_11 = (signed char)83;
int var_13 = -1281604013;
unsigned long long int var_14 = 6629159393609400730ULL;
_Bool var_16 = (_Bool)0;
_Bool var_18 = (_Bool)1;
int zero = 0;
signed char var_19 = (signed char)-123;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 3912031158U;
unsigned long long int var_22 = 17441963082264373866ULL;
_Bool arr_0 [11] [11] ;
int arr_1 [11] ;
int arr_5 [11] ;
unsigned char arr_3 [11] [11] ;
short arr_4 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = -1746951739;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = -2141295922;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)195;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (short)2182;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
