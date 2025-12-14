#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)181;
unsigned int var_7 = 3015152936U;
short var_8 = (short)-30851;
unsigned char var_10 = (unsigned char)180;
short var_11 = (short)1053;
unsigned char var_12 = (unsigned char)143;
int zero = 0;
unsigned char var_19 = (unsigned char)10;
signed char var_20 = (signed char)-86;
unsigned char var_21 = (unsigned char)252;
unsigned long long int var_22 = 5806785701230516213ULL;
int var_23 = -35779756;
long long int var_24 = 607344614655767035LL;
signed char var_25 = (signed char)65;
unsigned char var_26 = (unsigned char)4;
int var_27 = -1996657739;
unsigned int var_28 = 3062172673U;
unsigned int arr_0 [18] ;
unsigned short arr_1 [18] [18] ;
unsigned int arr_2 [18] ;
unsigned int arr_4 [18] [18] ;
int arr_5 [18] [18] ;
unsigned int arr_7 [18] ;
unsigned int arr_8 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 3627998089U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)61669;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 2807763577U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = 1890722678U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = -1449741617;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = 4117190778U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 1662584179U : 1615148032U;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
