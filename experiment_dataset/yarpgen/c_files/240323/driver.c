#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)2388;
_Bool var_2 = (_Bool)0;
short var_3 = (short)-10215;
unsigned long long int var_7 = 17684767215083977752ULL;
short var_10 = (short)25316;
_Bool var_11 = (_Bool)0;
unsigned long long int var_15 = 9373614202500688243ULL;
int zero = 0;
_Bool var_17 = (_Bool)1;
short var_18 = (short)4750;
signed char var_19 = (signed char)56;
signed char var_20 = (signed char)7;
_Bool var_21 = (_Bool)0;
signed char var_22 = (signed char)-26;
signed char var_23 = (signed char)-12;
_Bool arr_0 [25] [25] ;
signed char arr_1 [25] ;
int arr_5 [20] [20] ;
unsigned int arr_3 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (signed char)-44;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = 1635307111;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = 413472152U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
