#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-120;
unsigned long long int var_4 = 16350973022938291147ULL;
unsigned long long int var_5 = 4161795676118479800ULL;
unsigned short var_7 = (unsigned short)58701;
int var_8 = 1357005824;
int zero = 0;
unsigned short var_10 = (unsigned short)19041;
int var_11 = 417735483;
unsigned int var_12 = 2208763212U;
long long int var_13 = 9010196119332157437LL;
int var_14 = 955773524;
long long int var_15 = 3119375364496230534LL;
short var_16 = (short)7231;
unsigned short var_17 = (unsigned short)27194;
unsigned char var_18 = (unsigned char)164;
unsigned char arr_0 [19] ;
_Bool arr_3 [21] [21] ;
signed char arr_4 [21] ;
_Bool arr_2 [19] ;
signed char arr_5 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (unsigned char)65;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (signed char)-64;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (signed char)126;
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
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
