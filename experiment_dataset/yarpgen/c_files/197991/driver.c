#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-3661;
short var_6 = (short)12662;
_Bool var_7 = (_Bool)1;
unsigned long long int var_8 = 1963079796254856815ULL;
unsigned short var_9 = (unsigned short)18775;
unsigned char var_12 = (unsigned char)250;
int zero = 0;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)52;
unsigned short var_16 = (unsigned short)3715;
long long int var_17 = 2493154169014464492LL;
unsigned short var_18 = (unsigned short)41530;
long long int arr_0 [13] ;
signed char arr_1 [13] [13] ;
unsigned short arr_2 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 7651067856625111725LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)69 : (signed char)-73;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned short)31670 : (unsigned short)13724;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
