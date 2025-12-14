#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1138705330U;
unsigned short var_1 = (unsigned short)60533;
unsigned short var_2 = (unsigned short)57550;
unsigned int var_4 = 1657432266U;
signed char var_8 = (signed char)-43;
unsigned short var_10 = (unsigned short)65316;
unsigned short var_13 = (unsigned short)37883;
long long int var_14 = -2336455210501656429LL;
int zero = 0;
unsigned short var_16 = (unsigned short)39893;
int var_17 = 979551585;
unsigned char var_18 = (unsigned char)141;
unsigned int var_19 = 3191577181U;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)72;
unsigned int var_22 = 3360099942U;
short arr_0 [21] ;
signed char arr_1 [21] [21] ;
short arr_2 [21] ;
int arr_5 [21] ;
signed char arr_3 [21] ;
short arr_7 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (short)-15002;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)81;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (short)17699;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = -2119186549;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (signed char)-32;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = (short)-9958;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
