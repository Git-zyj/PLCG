#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1450977212;
_Bool var_1 = (_Bool)1;
short var_3 = (short)21327;
unsigned char var_4 = (unsigned char)223;
_Bool var_6 = (_Bool)0;
unsigned int var_7 = 854734239U;
unsigned long long int var_9 = 13729189887863785069ULL;
int var_10 = -29390996;
unsigned int var_11 = 606152776U;
unsigned long long int var_12 = 15944926957232340742ULL;
unsigned int var_13 = 1172765496U;
int zero = 0;
unsigned char var_14 = (unsigned char)48;
long long int var_15 = -6968169416063517198LL;
long long int var_16 = 7186533727224103433LL;
unsigned long long int var_17 = 1030514974697957920ULL;
unsigned int var_18 = 4092839388U;
unsigned int var_19 = 3939749712U;
short var_20 = (short)2800;
unsigned int var_21 = 2977868717U;
unsigned long long int var_22 = 9810592337787015496ULL;
unsigned long long int var_23 = 9348339112832812276ULL;
int var_24 = 75532955;
int var_25 = -784036330;
unsigned long long int arr_0 [20] ;
signed char arr_1 [20] ;
unsigned short arr_3 [20] ;
unsigned int arr_4 [20] ;
_Bool arr_5 [20] ;
short arr_2 [20] ;
short arr_8 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = 5158719313013029965ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (signed char)99;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (unsigned short)25518;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = 1789251363U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (short)-26804;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = (short)28664;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
