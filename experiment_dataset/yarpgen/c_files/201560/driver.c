#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -190308503;
_Bool var_3 = (_Bool)0;
short var_6 = (short)24139;
short var_11 = (short)-2554;
long long int var_15 = -6296807980301366519LL;
int zero = 0;
short var_17 = (short)-11243;
int var_18 = -1192742244;
long long int var_19 = 8394833639085918212LL;
unsigned char var_20 = (unsigned char)39;
int var_21 = 1095647571;
_Bool var_22 = (_Bool)1;
long long int var_23 = -3147171767280091358LL;
signed char var_24 = (signed char)61;
int var_25 = -861548493;
signed char var_26 = (signed char)-4;
unsigned int arr_3 [14] ;
unsigned char arr_4 [14] ;
unsigned char arr_5 [14] [14] ;
unsigned int arr_6 [14] ;
unsigned int arr_10 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = 2500206575U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (unsigned char)172;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)194;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = 1406232657U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? 927682299U : 1523209340U;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
