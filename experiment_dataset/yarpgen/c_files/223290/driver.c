#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)139;
signed char var_1 = (signed char)-111;
_Bool var_2 = (_Bool)1;
unsigned int var_3 = 3420449602U;
int var_4 = -28726893;
unsigned short var_7 = (unsigned short)14611;
int var_8 = -2084107210;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned long long int var_10 = 12253360016950038597ULL;
unsigned char var_11 = (unsigned char)221;
int var_12 = -2097518788;
signed char var_13 = (signed char)29;
unsigned short var_14 = (unsigned short)61855;
signed char var_15 = (signed char)-92;
unsigned long long int var_16 = 6523139614412861120ULL;
signed char arr_0 [15] [15] ;
unsigned char arr_1 [15] ;
int arr_2 [15] ;
unsigned char arr_3 [15] ;
unsigned char arr_5 [10] ;
signed char arr_6 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-21;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (unsigned char)104;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = -1060226057;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (unsigned char)16;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (unsigned char)54;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = (signed char)-29;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
