#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -8766897902745439060LL;
unsigned int var_3 = 669261851U;
unsigned long long int var_4 = 16691007658728099628ULL;
unsigned short var_5 = (unsigned short)43721;
unsigned long long int var_6 = 8437571470674892918ULL;
int var_8 = 615552019;
unsigned short var_9 = (unsigned short)21789;
int zero = 0;
unsigned short var_10 = (unsigned short)2738;
signed char var_11 = (signed char)56;
unsigned long long int var_12 = 270025394907660538ULL;
int var_13 = -365043836;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)18205;
int var_16 = 853131481;
unsigned int arr_0 [13] ;
unsigned short arr_1 [13] [13] ;
short arr_3 [22] ;
long long int arr_4 [22] ;
short arr_5 [22] [22] ;
int arr_6 [22] ;
long long int arr_2 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 1084822344U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)6639;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (short)23918;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = -8529044300188185721LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_5 [i_0] [i_1] = (short)-24906;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = -1784796312;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = 534754286807627262LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
