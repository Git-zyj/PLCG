#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-14;
unsigned short var_2 = (unsigned short)44644;
unsigned short var_3 = (unsigned short)42645;
unsigned int var_4 = 980795992U;
long long int var_5 = 4496938378979088017LL;
unsigned short var_6 = (unsigned short)42061;
unsigned int var_7 = 2887710189U;
unsigned char var_8 = (unsigned char)130;
unsigned int var_9 = 2925509979U;
long long int var_10 = -3010610838206198366LL;
int zero = 0;
unsigned int var_12 = 836890239U;
long long int var_13 = -8525925382712590596LL;
long long int var_14 = -6456182423235718232LL;
unsigned char var_15 = (unsigned char)199;
unsigned short var_16 = (unsigned short)46970;
unsigned char arr_1 [12] ;
unsigned short arr_4 [12] [12] ;
unsigned int arr_6 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned char)36 : (unsigned char)235;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)4812 : (unsigned short)30180;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? 1589979413U : 2452656544U;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
