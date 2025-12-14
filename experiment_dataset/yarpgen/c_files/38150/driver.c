#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)26;
unsigned long long int var_2 = 11269350232503488535ULL;
unsigned int var_5 = 1054089275U;
short var_10 = (short)-8128;
int var_12 = 499179858;
int zero = 0;
long long int var_17 = -7292938165294494352LL;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 2604623825U;
unsigned int var_20 = 1126499896U;
unsigned short arr_2 [19] ;
unsigned int arr_3 [19] ;
unsigned int arr_4 [19] ;
long long int arr_5 [19] [19] [19] ;
unsigned int arr_6 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned short)10903 : (unsigned short)25024;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = 1457726585U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = 3213991101U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = -4452105194361539348LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 859260524U : 4048071287U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
