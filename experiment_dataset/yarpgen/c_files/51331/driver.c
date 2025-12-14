#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)195;
unsigned short var_1 = (unsigned short)15303;
unsigned int var_3 = 2562109467U;
unsigned char var_5 = (unsigned char)226;
unsigned short var_6 = (unsigned short)40152;
signed char var_9 = (signed char)-106;
unsigned char var_11 = (unsigned char)124;
_Bool var_12 = (_Bool)0;
long long int var_13 = 5205763937062736225LL;
unsigned long long int var_15 = 820581021489447615ULL;
int zero = 0;
long long int var_16 = -7598380945069191312LL;
unsigned long long int var_17 = 6298536688583135095ULL;
unsigned int var_18 = 1170031990U;
int var_19 = -120927905;
_Bool var_20 = (_Bool)1;
int var_21 = -598954572;
unsigned short var_22 = (unsigned short)46197;
long long int var_23 = -6206879052319042971LL;
signed char var_24 = (signed char)-62;
unsigned char var_25 = (unsigned char)199;
unsigned long long int var_26 = 3735273643070946142ULL;
signed char arr_0 [24] [24] ;
unsigned short arr_1 [24] [24] ;
long long int arr_2 [24] [24] ;
signed char arr_4 [24] [24] [24] ;
unsigned int arr_5 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-21;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)10462;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? 3144944542419716481LL : 2336926496065757817LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)123 : (signed char)-67;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? 2836831446U : 4120152161U;
}

void checksum() {
    hash(&seed, var_16);
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
