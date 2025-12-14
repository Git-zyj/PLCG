#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_3 = 1443474856770155483LL;
unsigned long long int var_6 = 17374917827298947698ULL;
signed char var_7 = (signed char)50;
int var_12 = 1586616256;
unsigned char var_17 = (unsigned char)31;
short var_18 = (short)-2729;
int zero = 0;
unsigned int var_19 = 3877630634U;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)21973;
unsigned int var_22 = 2022012219U;
int var_23 = -1088041702;
unsigned long long int var_24 = 2677453835150568988ULL;
int var_25 = 286751318;
unsigned short var_26 = (unsigned short)63854;
unsigned char arr_0 [10] [10] ;
int arr_1 [10] ;
_Bool arr_4 [14] [14] ;
short arr_7 [14] ;
_Bool arr_8 [14] ;
long long int arr_9 [14] [14] [14] [14] ;
unsigned char arr_2 [10] ;
unsigned char arr_3 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)32 : (unsigned char)161;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = -987042939;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = (short)8978;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = 3680849639166529189LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned char)68 : (unsigned char)239;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned char)208 : (unsigned char)187;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
