#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1631117159;
int var_3 = 1503565747;
long long int var_6 = -48963740821966283LL;
long long int var_7 = -7563497634281623351LL;
unsigned long long int var_10 = 9849455113800553619ULL;
unsigned int var_12 = 1781686645U;
unsigned long long int var_13 = 11142789007681570476ULL;
int zero = 0;
long long int var_14 = -3368825849376068701LL;
signed char var_15 = (signed char)-67;
long long int var_16 = 2856575381380096107LL;
int var_17 = 1007574235;
unsigned long long int var_18 = 5159291373427920971ULL;
unsigned long long int var_19 = 17483035770496765527ULL;
unsigned long long int var_20 = 4382029687764739723ULL;
int arr_1 [11] ;
int arr_4 [11] [11] [11] ;
signed char arr_6 [11] [11] [11] ;
unsigned short arr_12 [11] [11] [11] [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = -1672077861;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -962319579 : 1585790841;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (signed char)46;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)59493;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
