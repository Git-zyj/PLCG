#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)94;
_Bool var_2 = (_Bool)1;
short var_3 = (short)-25200;
_Bool var_4 = (_Bool)1;
signed char var_5 = (signed char)-32;
int var_7 = 48938777;
unsigned int var_8 = 4128462424U;
unsigned short var_9 = (unsigned short)12275;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)21874;
unsigned int var_13 = 136174853U;
_Bool var_15 = (_Bool)0;
int var_16 = -1515749593;
int zero = 0;
_Bool var_17 = (_Bool)1;
long long int var_18 = -464317912604410755LL;
_Bool var_19 = (_Bool)0;
long long int arr_0 [20] [20] ;
signed char arr_1 [20] [20] ;
unsigned char arr_2 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? 7599899669702472827LL : 7475498591798863009LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)91;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned char)1 : (unsigned char)111;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
