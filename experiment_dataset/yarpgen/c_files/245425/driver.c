#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-437;
unsigned long long int var_1 = 198605564635414042ULL;
int var_4 = 1811466424;
_Bool var_5 = (_Bool)0;
unsigned short var_8 = (unsigned short)5907;
int var_9 = 1933214537;
unsigned char var_10 = (unsigned char)198;
int var_12 = -1994083246;
int zero = 0;
unsigned long long int var_13 = 9630371586918819313ULL;
int var_14 = 1047404594;
unsigned short var_15 = (unsigned short)37756;
unsigned char var_16 = (unsigned char)186;
_Bool var_17 = (_Bool)0;
int arr_0 [11] ;
unsigned char arr_2 [11] ;
int arr_3 [11] [11] [11] ;
unsigned short arr_4 [11] ;
long long int arr_6 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = -1552428780;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (unsigned char)102;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 939330260;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (unsigned short)31699;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = 8232032012063900104LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
