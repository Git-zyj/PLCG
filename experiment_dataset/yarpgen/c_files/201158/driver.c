#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-92;
signed char var_1 = (signed char)-81;
unsigned int var_3 = 680409441U;
short var_4 = (short)12166;
unsigned char var_5 = (unsigned char)52;
long long int var_8 = -49676399106665204LL;
signed char var_9 = (signed char)-93;
unsigned int var_10 = 487271184U;
signed char var_11 = (signed char)-15;
unsigned short var_12 = (unsigned short)18815;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 10589341096492655105ULL;
int zero = 0;
unsigned long long int var_17 = 10355614038566699336ULL;
short var_18 = (short)16885;
_Bool var_19 = (_Bool)0;
short arr_0 [22] ;
short arr_1 [22] ;
unsigned char arr_2 [22] [22] [22] ;
unsigned int arr_3 [22] [22] ;
unsigned int arr_4 [22] ;
unsigned int arr_5 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (short)6022 : (short)-23241;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (short)9816;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (unsigned char)92;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = 2147607206U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 3817623444U : 3212523630U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 4093231217U : 2015023096U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
