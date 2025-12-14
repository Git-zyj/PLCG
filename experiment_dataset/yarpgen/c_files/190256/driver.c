#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1960785508;
int var_1 = -1014998582;
signed char var_3 = (signed char)-125;
unsigned short var_4 = (unsigned short)38260;
signed char var_5 = (signed char)12;
signed char var_6 = (signed char)-104;
short var_8 = (short)8422;
short var_9 = (short)-13015;
short var_10 = (short)15126;
unsigned short var_11 = (unsigned short)64232;
unsigned char var_12 = (unsigned char)20;
int var_14 = -1198726316;
int zero = 0;
unsigned short var_16 = (unsigned short)15140;
unsigned short var_17 = (unsigned short)54669;
unsigned char var_18 = (unsigned char)95;
short arr_0 [11] [11] ;
unsigned short arr_1 [11] [11] ;
unsigned short arr_7 [12] ;
signed char arr_8 [12] ;
unsigned char arr_2 [11] ;
signed char arr_3 [11] ;
unsigned short arr_4 [11] ;
short arr_5 [11] ;
unsigned short arr_6 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-30362;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)56139;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = (unsigned short)50021;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = (signed char)-66;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (unsigned char)199;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (signed char)-103;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (unsigned short)2993;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (short)-8828;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = (unsigned short)51096;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
