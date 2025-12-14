#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)60282;
unsigned char var_4 = (unsigned char)178;
unsigned long long int var_5 = 12146390513545964956ULL;
unsigned short var_6 = (unsigned short)40221;
signed char var_8 = (signed char)98;
int var_10 = -1626127474;
unsigned int var_12 = 472055195U;
unsigned short var_14 = (unsigned short)18041;
unsigned int var_15 = 3557773010U;
unsigned short var_16 = (unsigned short)60724;
unsigned short var_17 = (unsigned short)37910;
_Bool var_18 = (_Bool)0;
unsigned char var_19 = (unsigned char)116;
int zero = 0;
unsigned int var_20 = 2706893250U;
unsigned short var_21 = (unsigned short)6283;
int var_22 = -624779788;
unsigned short var_23 = (unsigned short)28194;
int arr_2 [18] ;
short arr_7 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? -571802002 : 1102525537;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_7 [i_0] [i_1] = (short)-11347;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
