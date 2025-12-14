#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)86;
unsigned short var_4 = (unsigned short)1910;
short var_9 = (short)32475;
long long int var_10 = 7461362793684714892LL;
unsigned long long int var_11 = 13518036984741143069ULL;
_Bool var_12 = (_Bool)0;
unsigned char var_14 = (unsigned char)248;
unsigned int var_16 = 822882283U;
unsigned long long int var_17 = 7914683861000230314ULL;
unsigned int var_18 = 1292916596U;
int zero = 0;
_Bool var_19 = (_Bool)0;
long long int var_20 = 1091754430328938777LL;
_Bool var_21 = (_Bool)0;
_Bool var_22 = (_Bool)0;
unsigned int var_23 = 2519954493U;
short var_24 = (short)12093;
unsigned long long int var_25 = 17893141649720599968ULL;
short var_26 = (short)15261;
long long int var_27 = 7488635411161618408LL;
int var_28 = -1732744009;
short arr_3 [11] ;
unsigned int arr_7 [11] ;
short arr_8 [11] ;
unsigned char arr_9 [11] ;
unsigned int arr_12 [11] ;
short arr_13 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (short)-24281;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 1169961194U : 3619732106U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (short)10124 : (short)-19881;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_9 [i_0] = (unsigned char)51;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_12 [i_0] = 3516161585U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_13 [i_0] = (short)12430;
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
