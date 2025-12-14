#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 915892795;
short var_2 = (short)-32349;
signed char var_3 = (signed char)96;
short var_4 = (short)-14952;
unsigned char var_6 = (unsigned char)165;
short var_7 = (short)-7732;
short var_9 = (short)17014;
unsigned short var_10 = (unsigned short)21349;
long long int var_11 = -8443357533675398504LL;
int zero = 0;
unsigned short var_12 = (unsigned short)44388;
signed char var_13 = (signed char)22;
int var_14 = 2113630486;
unsigned int var_15 = 2512853263U;
unsigned char var_16 = (unsigned char)254;
unsigned short var_17 = (unsigned short)50246;
unsigned long long int var_18 = 14242772732683206229ULL;
long long int arr_0 [19] ;
unsigned short arr_2 [19] ;
unsigned short arr_3 [19] [19] ;
unsigned int arr_5 [19] [19] [19] ;
unsigned int arr_4 [19] ;
unsigned char arr_7 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 787258821808246314LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (unsigned short)42955;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)40351;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 3727975798U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = 1197524613U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = (unsigned char)107;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
