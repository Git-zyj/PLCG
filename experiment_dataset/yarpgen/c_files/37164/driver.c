#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)24039;
unsigned long long int var_2 = 9808426789964674074ULL;
_Bool var_3 = (_Bool)0;
_Bool var_6 = (_Bool)1;
unsigned short var_7 = (unsigned short)17470;
unsigned char var_10 = (unsigned char)128;
unsigned short var_13 = (unsigned short)16771;
int var_14 = 464051832;
_Bool var_15 = (_Bool)0;
long long int var_16 = 3048156532869929076LL;
int zero = 0;
int var_17 = -1924342378;
unsigned char var_18 = (unsigned char)35;
signed char var_19 = (signed char)-1;
unsigned char var_20 = (unsigned char)203;
unsigned char var_21 = (unsigned char)67;
unsigned int var_22 = 3273523819U;
unsigned int arr_0 [13] ;
signed char arr_1 [13] ;
int arr_3 [18] [18] ;
unsigned short arr_5 [18] ;
short arr_2 [13] ;
signed char arr_12 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 1321275675U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (signed char)-65;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = -884999408;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (unsigned short)7446;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (short)24031;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (signed char)61;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_12 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
