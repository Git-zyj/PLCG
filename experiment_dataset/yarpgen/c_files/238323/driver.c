#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1394157212U;
unsigned short var_1 = (unsigned short)13296;
unsigned short var_8 = (unsigned short)16868;
unsigned int var_10 = 633376451U;
unsigned short var_11 = (unsigned short)21335;
int zero = 0;
short var_12 = (short)13178;
unsigned short var_13 = (unsigned short)48375;
unsigned short var_14 = (unsigned short)53609;
short var_15 = (short)-15523;
unsigned short var_16 = (unsigned short)55738;
unsigned short arr_0 [13] [13] ;
short arr_1 [13] ;
unsigned long long int arr_5 [13] [13] ;
int arr_6 [13] ;
unsigned short arr_7 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)62531;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (short)4256;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? 6157465018040515906ULL : 2731550822557659800ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? -1639909282 : -23573371;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (unsigned short)3426 : (unsigned short)30026;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
