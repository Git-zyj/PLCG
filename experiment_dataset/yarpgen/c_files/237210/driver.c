#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)98;
int var_6 = -597851045;
unsigned int var_8 = 2779720367U;
unsigned int var_12 = 1454762414U;
unsigned long long int var_13 = 1695890061014461688ULL;
int zero = 0;
long long int var_18 = -5917937932322759449LL;
unsigned int var_19 = 2410691406U;
int var_20 = -1711345578;
_Bool var_21 = (_Bool)0;
unsigned int var_22 = 2111878147U;
int var_23 = 635807519;
unsigned long long int var_24 = 11454514593330513424ULL;
unsigned char var_25 = (unsigned char)5;
long long int arr_0 [14] [14] ;
unsigned int arr_6 [20] ;
unsigned short arr_7 [20] ;
unsigned char arr_10 [20] [20] ;
unsigned char arr_3 [14] ;
_Bool arr_4 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = -3555504355442236499LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = 852143108U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = (unsigned short)45060;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned char)137;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (unsigned char)37;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)1;
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
