#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4076188449U;
unsigned int var_1 = 3442780393U;
unsigned short var_2 = (unsigned short)1945;
signed char var_4 = (signed char)-29;
unsigned char var_6 = (unsigned char)240;
int var_7 = -206948525;
int var_8 = -2039436379;
short var_9 = (short)32104;
unsigned short var_10 = (unsigned short)32709;
signed char var_11 = (signed char)-96;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned int var_13 = 3246697917U;
signed char var_14 = (signed char)83;
int var_15 = 629702472;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 3377076226U;
long long int var_18 = -6114430257538857612LL;
int var_19 = -1953733026;
_Bool arr_0 [25] [25] ;
signed char arr_1 [25] ;
unsigned int arr_2 [25] [25] ;
unsigned short arr_3 [25] ;
short arr_4 [25] ;
unsigned short arr_5 [25] ;
long long int arr_6 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (signed char)-14;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = 97056130U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (unsigned short)10144;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (short)22150;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (unsigned short)17854;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = -5232606246312993663LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
