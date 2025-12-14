#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 382671191U;
short var_1 = (short)16011;
unsigned long long int var_3 = 17014731376028444571ULL;
unsigned short var_4 = (unsigned short)54577;
unsigned char var_5 = (unsigned char)90;
signed char var_7 = (signed char)50;
unsigned long long int var_9 = 3482418475014362920ULL;
signed char var_11 = (signed char)21;
int zero = 0;
int var_12 = -1050641178;
unsigned char var_13 = (unsigned char)26;
unsigned short arr_2 [14] ;
unsigned int arr_3 [14] ;
signed char arr_4 [14] ;
_Bool arr_5 [14] [14] ;
int arr_6 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (unsigned short)53964;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = 3726285974U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (signed char)-86;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 1046393032 : 107078990;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
