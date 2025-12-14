#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 4926249735566753786ULL;
int var_4 = 1407050788;
_Bool var_5 = (_Bool)0;
unsigned long long int var_8 = 3983949704938995667ULL;
int var_9 = 388055422;
int var_10 = 1065321828;
unsigned short var_12 = (unsigned short)36742;
unsigned short var_13 = (unsigned short)26343;
long long int var_14 = -8693786818260220391LL;
_Bool var_15 = (_Bool)0;
int zero = 0;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 775639020U;
short var_20 = (short)19976;
short var_21 = (short)-13259;
short var_22 = (short)30069;
unsigned int var_23 = 41752455U;
short var_24 = (short)22526;
signed char var_25 = (signed char)14;
signed char var_26 = (signed char)-2;
short var_27 = (short)-6463;
unsigned int var_28 = 2940744836U;
int var_29 = -1922872753;
unsigned char var_30 = (unsigned char)196;
short arr_0 [16] ;
unsigned int arr_1 [16] ;
_Bool arr_3 [16] ;
unsigned int arr_4 [16] [16] ;
long long int arr_5 [16] ;
short arr_7 [16] [16] [16] ;
unsigned long long int arr_11 [20] [20] ;
unsigned short arr_12 [20] ;
unsigned short arr_10 [16] ;
_Bool arr_13 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (short)8324;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 1137603434U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = 60545605U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = -3141373938740400776LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (short)-4558;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_11 [i_0] [i_1] = 16457708398403683985ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_12 [i_0] = (unsigned short)12582;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_10 [i_0] = (unsigned short)12677;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
