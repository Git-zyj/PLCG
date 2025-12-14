#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)103;
long long int var_2 = 4087608102661864537LL;
unsigned long long int var_3 = 12842918560854223487ULL;
_Bool var_4 = (_Bool)1;
short var_5 = (short)-11608;
signed char var_6 = (signed char)93;
unsigned int var_8 = 2005505821U;
signed char var_9 = (signed char)-66;
int zero = 0;
int var_10 = -318669866;
unsigned int var_11 = 1660266367U;
unsigned short var_12 = (unsigned short)32379;
unsigned short var_13 = (unsigned short)33045;
unsigned char var_14 = (unsigned char)240;
unsigned int var_15 = 3731416177U;
long long int var_16 = -4030138685480431612LL;
int arr_0 [19] ;
int arr_1 [19] [19] ;
_Bool arr_4 [19] [19] ;
unsigned long long int arr_5 [19] ;
unsigned long long int arr_8 [19] ;
unsigned int arr_2 [19] ;
unsigned long long int arr_3 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 1747263083;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = -870077305;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = 15186491804561620640ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_8 [i_0] = 10478973190709418032ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = 2930232441U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = 15059671495416387794ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
