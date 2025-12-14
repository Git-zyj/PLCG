#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)2061;
unsigned long long int var_1 = 5667137310458995428ULL;
unsigned long long int var_2 = 12366714437278515112ULL;
short var_3 = (short)1409;
unsigned char var_4 = (unsigned char)95;
_Bool var_5 = (_Bool)1;
short var_6 = (short)-376;
int var_8 = -1070877815;
_Bool var_9 = (_Bool)0;
int zero = 0;
long long int var_10 = -3288987219528512543LL;
short var_11 = (short)-30460;
int var_12 = 612857970;
unsigned long long int var_13 = 13026107298502842533ULL;
int var_14 = -1339932315;
_Bool arr_0 [14] ;
unsigned short arr_2 [14] [14] ;
_Bool arr_4 [21] [21] ;
unsigned char arr_6 [21] ;
unsigned int arr_3 [14] ;
short arr_7 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)9681;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (unsigned char)119;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = 2334176033U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_7 [i_0] [i_1] = (short)1760;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
