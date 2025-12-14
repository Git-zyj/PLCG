#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1660835068U;
short var_4 = (short)5986;
unsigned short var_6 = (unsigned short)15002;
unsigned short var_7 = (unsigned short)27498;
unsigned int var_10 = 3623528485U;
unsigned long long int var_12 = 6997577049329635186ULL;
unsigned long long int var_15 = 7228017429299024177ULL;
int var_16 = -1109607200;
short var_17 = (short)-25174;
int zero = 0;
int var_18 = 1099944426;
int var_19 = -1960937868;
unsigned char var_20 = (unsigned char)13;
int var_21 = -1188815870;
unsigned char var_22 = (unsigned char)23;
long long int var_23 = 5621025406058620065LL;
unsigned char var_24 = (unsigned char)14;
unsigned char var_25 = (unsigned char)70;
unsigned short arr_0 [16] ;
unsigned char arr_1 [16] [16] ;
unsigned int arr_3 [16] ;
unsigned long long int arr_6 [22] ;
long long int arr_7 [22] [22] ;
unsigned char arr_4 [16] [16] ;
unsigned short arr_5 [16] ;
_Bool arr_10 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (unsigned short)18439;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)121;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = 35327470U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = 6413320379744940437ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_7 [i_0] [i_1] = 509547594716497736LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)155;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (unsigned short)26747;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_10 [i_0] [i_1] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
