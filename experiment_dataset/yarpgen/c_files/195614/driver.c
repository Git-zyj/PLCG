#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)23;
unsigned char var_3 = (unsigned char)243;
signed char var_4 = (signed char)-90;
unsigned short var_7 = (unsigned short)16468;
unsigned int var_8 = 1587688281U;
int zero = 0;
unsigned char var_12 = (unsigned char)193;
unsigned long long int var_13 = 14405530060740438578ULL;
unsigned long long int var_14 = 8454377420421665022ULL;
long long int var_15 = 8305756371518240696LL;
short var_16 = (short)-27791;
long long int arr_0 [13] ;
unsigned long long int arr_1 [13] ;
unsigned long long int arr_5 [22] ;
signed char arr_6 [22] ;
short arr_2 [13] ;
short arr_7 [22] ;
unsigned short arr_10 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 388939094407300253LL : -8093048128668176221LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 10022356063071200824ULL : 17058838932252063359ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = 18318398779891440228ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = (signed char)33;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (short)23014 : (short)-10265;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = (short)-16742;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (unsigned short)38842 : (unsigned short)34189;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
