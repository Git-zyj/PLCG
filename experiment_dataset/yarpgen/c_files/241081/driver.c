#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)32142;
unsigned int var_1 = 4087084443U;
unsigned short var_2 = (unsigned short)6876;
unsigned long long int var_3 = 1580624654394085001ULL;
short var_5 = (short)32418;
_Bool var_6 = (_Bool)1;
signed char var_7 = (signed char)44;
unsigned int var_8 = 905067120U;
short var_9 = (short)-6943;
short var_10 = (short)29280;
short var_11 = (short)-9032;
unsigned int var_12 = 976278824U;
int zero = 0;
unsigned int var_14 = 3966585389U;
unsigned int var_15 = 1763086122U;
unsigned int var_16 = 1385019373U;
unsigned short var_17 = (unsigned short)41821;
signed char var_18 = (signed char)123;
unsigned int arr_0 [14] ;
unsigned short arr_1 [14] ;
int arr_2 [14] [14] ;
unsigned long long int arr_3 [14] ;
int arr_4 [14] [14] ;
short arr_5 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 2458528180U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (unsigned short)21926;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = 1356472273;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = 2361459223635002175ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = -1544642753;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = (short)9522;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
