#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)29696;
short var_2 = (short)21544;
unsigned short var_3 = (unsigned short)6099;
short var_6 = (short)26670;
unsigned int var_7 = 3219135315U;
signed char var_9 = (signed char)38;
int var_10 = 1366518374;
int zero = 0;
unsigned short var_11 = (unsigned short)12255;
int var_12 = 1931037129;
unsigned int var_13 = 3574580027U;
unsigned short var_14 = (unsigned short)38953;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 2472880142U;
unsigned short var_17 = (unsigned short)29695;
short var_18 = (short)3930;
unsigned int var_19 = 1117138969U;
signed char var_20 = (signed char)-64;
unsigned short arr_1 [21] ;
unsigned int arr_7 [21] [21] ;
_Bool arr_14 [14] ;
short arr_11 [21] [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (unsigned short)50209;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? 2090666560U : 3566611077U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_14 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (short)-7202 : (short)-24520;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    hash(&seed, arr_11 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
