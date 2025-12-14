#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_1 = (short)-16116;
signed char var_2 = (signed char)124;
int var_4 = -203650487;
unsigned int var_5 = 1744700685U;
_Bool var_6 = (_Bool)0;
signed char var_7 = (signed char)12;
unsigned short var_8 = (unsigned short)18910;
unsigned short var_9 = (unsigned short)36793;
_Bool var_11 = (_Bool)1;
long long int var_12 = -4706264417557003938LL;
int var_13 = 1954788259;
int zero = 0;
unsigned int var_14 = 509044940U;
long long int var_15 = 3625658760521166041LL;
unsigned char var_16 = (unsigned char)234;
unsigned int var_17 = 3999112260U;
long long int arr_0 [12] [12] ;
unsigned short arr_1 [12] ;
long long int arr_3 [14] ;
unsigned short arr_4 [14] ;
long long int arr_2 [12] [12] ;
unsigned long long int arr_5 [14] ;
unsigned char arr_6 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = -4699142612628442381LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (unsigned short)1432;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = -1057000945097720557LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (unsigned short)38227;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = 3357531639533389535LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = 8786125829989959159ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (unsigned char)202;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
