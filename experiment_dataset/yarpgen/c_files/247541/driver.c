#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_1 = 10346967626466009660ULL;
signed char var_2 = (signed char)-7;
unsigned char var_3 = (unsigned char)237;
unsigned short var_4 = (unsigned short)63743;
_Bool var_7 = (_Bool)1;
unsigned long long int var_8 = 16588104331286742561ULL;
short var_11 = (short)14413;
unsigned int var_13 = 2789317909U;
unsigned long long int var_14 = 8583176742499350995ULL;
_Bool var_15 = (_Bool)1;
int zero = 0;
signed char var_18 = (signed char)-9;
unsigned char var_19 = (unsigned char)66;
unsigned long long int var_20 = 14214686630924565074ULL;
unsigned int var_21 = 1623175319U;
unsigned char var_22 = (unsigned char)213;
unsigned int var_23 = 2077520893U;
short var_24 = (short)-31060;
int arr_3 [11] ;
_Bool arr_6 [11] [11] [11] [11] [11] ;
unsigned long long int arr_8 [11] [11] [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = -1794576209;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_6 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] = 10590458666233791576ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
