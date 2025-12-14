#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1984415028U;
unsigned long long int var_1 = 6528870407065967362ULL;
unsigned char var_2 = (unsigned char)18;
long long int var_3 = -3834527729760230892LL;
unsigned short var_8 = (unsigned short)29811;
unsigned short var_10 = (unsigned short)64063;
int zero = 0;
long long int var_12 = -3456607692085890064LL;
unsigned char var_13 = (unsigned char)68;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)8;
unsigned int var_16 = 119099491U;
unsigned long long int var_17 = 7592579584037379947ULL;
unsigned char var_18 = (unsigned char)214;
long long int var_19 = -231463414597487258LL;
short var_20 = (short)-5641;
unsigned long long int var_21 = 4397165564834404407ULL;
short var_22 = (short)-24143;
unsigned short var_23 = (unsigned short)29582;
unsigned char var_24 = (unsigned char)101;
unsigned char var_25 = (unsigned char)73;
unsigned short arr_0 [21] ;
int arr_1 [21] ;
unsigned char arr_2 [21] ;
unsigned short arr_3 [21] [21] ;
short arr_5 [21] [21] ;
short arr_6 [21] [21] [21] ;
unsigned short arr_7 [21] [21] [21] ;
unsigned short arr_9 [21] [21] [21] ;
short arr_8 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (unsigned short)26470;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = -1701152469;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (unsigned char)199;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)53473;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = (short)18640;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (short)21598;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (unsigned short)18936;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (unsigned short)36836;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_8 [i_0] [i_1] = (short)-30627;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
