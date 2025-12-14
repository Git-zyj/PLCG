#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned int var_2 = 1995677548U;
int var_4 = -970520757;
unsigned short var_5 = (unsigned short)7785;
unsigned char var_6 = (unsigned char)228;
unsigned int var_8 = 2986162953U;
int var_10 = 1536934595;
_Bool var_12 = (_Bool)1;
short var_13 = (short)8659;
int zero = 0;
unsigned char var_15 = (unsigned char)231;
unsigned char var_16 = (unsigned char)119;
short var_17 = (short)2574;
unsigned short arr_1 [15] [15] ;
int arr_3 [15] [15] ;
unsigned short arr_5 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)58193 : (unsigned short)37087;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? 1036952471 : -1201403221;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned short)15097 : (unsigned short)64601;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
