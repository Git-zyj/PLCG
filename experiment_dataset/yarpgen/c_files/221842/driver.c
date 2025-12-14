#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)10406;
unsigned char var_4 = (unsigned char)229;
unsigned int var_5 = 3416018348U;
long long int var_6 = -7866930945831827372LL;
unsigned char var_7 = (unsigned char)111;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned char var_11 = (unsigned char)3;
unsigned char var_12 = (unsigned char)219;
short var_13 = (short)17019;
unsigned long long int var_14 = 1600117425319152955ULL;
signed char var_15 = (signed char)91;
unsigned short var_16 = (unsigned short)16165;
long long int var_17 = -3283538917094501755LL;
signed char var_18 = (signed char)-34;
unsigned int var_19 = 3746763721U;
unsigned long long int var_20 = 9423188597373633516ULL;
unsigned char var_21 = (unsigned char)164;
unsigned int var_22 = 124932062U;
short var_23 = (short)18780;
unsigned long long int var_24 = 15624315309399062586ULL;
_Bool var_25 = (_Bool)1;
unsigned short arr_0 [16] ;
unsigned char arr_1 [16] ;
_Bool arr_2 [16] [16] ;
unsigned char arr_3 [16] ;
unsigned short arr_4 [16] [16] ;
int arr_5 [16] [16] ;
unsigned long long int arr_6 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (unsigned short)42613;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (unsigned char)178;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (unsigned char)213;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)5230;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = 416782005;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_6 [i_0] [i_1] = 2175066007284410722ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
