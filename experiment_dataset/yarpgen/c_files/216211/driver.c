#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_3 = 1423851043U;
unsigned long long int var_4 = 335759496380783564ULL;
short var_5 = (short)-14985;
short var_6 = (short)-8227;
unsigned short var_7 = (unsigned short)24094;
unsigned char var_8 = (unsigned char)254;
unsigned int var_9 = 4193619558U;
_Bool var_10 = (_Bool)1;
short var_11 = (short)-2690;
int zero = 0;
signed char var_12 = (signed char)110;
unsigned char var_13 = (unsigned char)186;
unsigned int var_14 = 3171869051U;
unsigned int arr_3 [11] [11] [11] ;
_Bool arr_4 [11] ;
_Bool arr_5 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 1143983485U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
