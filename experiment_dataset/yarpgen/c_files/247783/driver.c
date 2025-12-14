#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)54373;
int var_2 = -1574308464;
unsigned int var_4 = 2600580720U;
signed char var_6 = (signed char)-95;
signed char var_8 = (signed char)-92;
unsigned int var_9 = 2048708540U;
signed char var_12 = (signed char)7;
_Bool var_13 = (_Bool)0;
int zero = 0;
_Bool var_14 = (_Bool)0;
short var_15 = (short)32584;
unsigned long long int var_16 = 10856068281232064990ULL;
unsigned int var_17 = 1668282607U;
unsigned short var_18 = (unsigned short)2922;
unsigned char var_19 = (unsigned char)212;
int arr_3 [16] [16] ;
signed char arr_6 [12] ;
unsigned int arr_7 [12] ;
signed char arr_9 [12] [12] [12] ;
unsigned long long int arr_10 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = -380067968;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = (signed char)-89;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = 2779607094U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (signed char)-9;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_10 [i_0] [i_1] = 5713295489436239187ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
