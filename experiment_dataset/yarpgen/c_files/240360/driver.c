#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)25;
long long int var_2 = 6254543226976909145LL;
unsigned short var_3 = (unsigned short)62888;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)1;
unsigned char var_6 = (unsigned char)56;
long long int var_8 = 4513715158048925764LL;
signed char var_9 = (signed char)119;
unsigned short var_10 = (unsigned short)60987;
int zero = 0;
unsigned char var_11 = (unsigned char)126;
unsigned char var_12 = (unsigned char)226;
_Bool var_13 = (_Bool)0;
int arr_0 [25] ;
signed char arr_1 [25] ;
int arr_2 [25] ;
int arr_3 [25] [25] ;
unsigned int arr_4 [25] ;
signed char arr_5 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 1943267283;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (signed char)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = 313282550;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = 1333228465;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = 2070638650U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)73 : (signed char)8;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
