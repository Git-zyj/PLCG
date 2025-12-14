#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)8926;
long long int var_3 = -8158599220366903155LL;
long long int var_4 = 1922191144130395172LL;
short var_6 = (short)-5436;
long long int var_7 = 5232495493209070381LL;
int var_8 = -1920471785;
int var_9 = -924221599;
unsigned short var_11 = (unsigned short)2870;
unsigned short var_12 = (unsigned short)52157;
int var_13 = -931704656;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 3225624171U;
signed char var_16 = (signed char)-92;
signed char var_17 = (signed char)115;
unsigned short var_18 = (unsigned short)17498;
unsigned long long int var_19 = 10737683904631253654ULL;
unsigned long long int arr_0 [23] ;
int arr_1 [23] ;
unsigned short arr_2 [23] ;
int arr_3 [23] ;
signed char arr_4 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 12208881616930014992ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 1353124135;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (unsigned short)40966;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = -277284366;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (signed char)16;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
