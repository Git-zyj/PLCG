#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1681364545796175538LL;
_Bool var_3 = (_Bool)1;
long long int var_4 = -5336830903796516614LL;
unsigned char var_7 = (unsigned char)249;
short var_8 = (short)-8149;
unsigned short var_9 = (unsigned short)12915;
unsigned long long int var_11 = 8855437647704842538ULL;
signed char var_12 = (signed char)-94;
int zero = 0;
short var_13 = (short)-9490;
unsigned long long int var_14 = 14957381479802199437ULL;
int var_15 = -2043256969;
int var_16 = 706275838;
unsigned short var_17 = (unsigned short)44271;
unsigned char arr_1 [18] ;
signed char arr_2 [18] [18] [18] ;
signed char arr_3 [18] [18] [18] ;
signed char arr_4 [18] ;
long long int arr_5 [18] [18] ;
_Bool arr_6 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (unsigned char)219;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (signed char)-99;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (signed char)46;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (signed char)-96;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = -4372084781021355328LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
