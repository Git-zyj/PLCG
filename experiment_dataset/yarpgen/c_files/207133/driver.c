#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-44;
unsigned long long int var_1 = 2052593554515725228ULL;
unsigned long long int var_2 = 12830547212269420348ULL;
_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 10548087314634864843ULL;
unsigned short var_5 = (unsigned short)30965;
unsigned long long int var_7 = 8330852278197435979ULL;
signed char var_8 = (signed char)74;
signed char var_9 = (signed char)-126;
unsigned int var_10 = 3864221210U;
int zero = 0;
unsigned long long int var_11 = 10617856460990371531ULL;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 9489898855820313833ULL;
unsigned long long int var_14 = 13261668666793244343ULL;
signed char var_15 = (signed char)43;
signed char var_16 = (signed char)-32;
signed char var_17 = (signed char)10;
int arr_0 [16] ;
signed char arr_1 [16] ;
signed char arr_3 [16] ;
short arr_4 [16] ;
short arr_5 [16] ;
int arr_6 [16] ;
unsigned long long int arr_9 [16] [16] [16] ;
unsigned short arr_7 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? -1262955197 : 1689512158;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (signed char)-93;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (signed char)-40;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (short)861;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (short)11532 : (short)8958;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = 940618920;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 12409053485075734603ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (unsigned short)17518 : (unsigned short)39201;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
