#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3720994687U;
_Bool var_1 = (_Bool)0;
int var_2 = -1772210923;
_Bool var_3 = (_Bool)0;
unsigned char var_4 = (unsigned char)24;
_Bool var_7 = (_Bool)1;
int var_10 = -680521330;
int zero = 0;
_Bool var_12 = (_Bool)1;
short var_13 = (short)22500;
long long int var_14 = -175868343390104710LL;
unsigned short var_15 = (unsigned short)6714;
unsigned char var_16 = (unsigned char)91;
unsigned char var_17 = (unsigned char)221;
unsigned short var_18 = (unsigned short)54301;
unsigned short var_19 = (unsigned short)36610;
short arr_0 [24] ;
int arr_1 [24] [24] ;
unsigned char arr_2 [24] ;
unsigned short arr_7 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (short)-31406;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = 791553589;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (unsigned char)129;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)17034 : (unsigned short)62959;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
