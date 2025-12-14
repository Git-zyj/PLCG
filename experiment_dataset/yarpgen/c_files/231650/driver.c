#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)33450;
signed char var_2 = (signed char)94;
short var_3 = (short)3803;
unsigned char var_4 = (unsigned char)200;
signed char var_7 = (signed char)-39;
long long int var_8 = 8047158977577673260LL;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)8343;
signed char var_16 = (signed char)-77;
int zero = 0;
unsigned int var_17 = 1940289752U;
short var_18 = (short)-29210;
unsigned char var_19 = (unsigned char)136;
signed char var_20 = (signed char)65;
unsigned int arr_0 [13] ;
unsigned int arr_1 [13] [13] ;
unsigned int arr_4 [12] [12] ;
unsigned short arr_5 [12] ;
signed char arr_6 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 991844779U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = 557922970U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = 3347366995U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (unsigned short)34392;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)-48;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_5 [i_0] );
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
