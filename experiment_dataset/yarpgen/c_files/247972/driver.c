#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-127;
short var_4 = (short)-1731;
signed char var_5 = (signed char)13;
_Bool var_8 = (_Bool)1;
signed char var_16 = (signed char)-67;
int zero = 0;
unsigned long long int var_18 = 9305990570723471337ULL;
short var_19 = (short)22834;
unsigned int var_20 = 3457546861U;
short var_21 = (short)24032;
short var_22 = (short)-17718;
unsigned long long int var_23 = 2883935716890191079ULL;
_Bool var_24 = (_Bool)0;
unsigned short var_25 = (unsigned short)24607;
unsigned int arr_0 [21] ;
unsigned int arr_1 [21] ;
signed char arr_2 [21] ;
signed char arr_4 [13] ;
_Bool arr_5 [13] ;
unsigned char arr_6 [13] ;
int arr_3 [21] ;
unsigned char arr_7 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 3995067U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 2853759097U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (signed char)-33;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (signed char)99;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned char)106 : (unsigned char)32;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = -473589233;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)206 : (unsigned char)32;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
