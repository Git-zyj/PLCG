#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-12967;
short var_2 = (short)25800;
unsigned long long int var_3 = 17391634730312357903ULL;
unsigned long long int var_4 = 1759451273710483651ULL;
unsigned int var_5 = 3171190213U;
unsigned short var_6 = (unsigned short)64730;
unsigned int var_8 = 337463743U;
int var_9 = 240715531;
unsigned int var_10 = 2726067274U;
short var_14 = (short)26337;
long long int var_15 = -3227368739060369817LL;
long long int var_16 = -5796440711954897651LL;
int zero = 0;
signed char var_19 = (signed char)127;
int var_20 = -1339063250;
unsigned long long int var_21 = 6731183220540786246ULL;
long long int var_22 = -1597324389250634397LL;
unsigned int arr_0 [17] [17] ;
_Bool arr_1 [17] [17] ;
signed char arr_2 [17] ;
short arr_6 [14] [14] ;
unsigned char arr_3 [17] ;
unsigned short arr_4 [17] ;
unsigned int arr_7 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = 1069265334U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (signed char)76;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_6 [i_0] [i_1] = (short)25760;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (unsigned char)184;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (unsigned short)19490;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = 2105798761U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
