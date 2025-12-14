#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3443654117U;
long long int var_3 = 6876555446100087206LL;
unsigned long long int var_6 = 16016141148466442879ULL;
unsigned int var_8 = 2353244548U;
short var_9 = (short)3259;
int zero = 0;
signed char var_12 = (signed char)-95;
short var_13 = (short)-2395;
unsigned short var_14 = (unsigned short)11437;
unsigned int arr_0 [11] ;
short arr_1 [11] ;
unsigned int arr_3 [16] ;
unsigned short arr_4 [16] ;
short arr_7 [16] ;
short arr_8 [16] ;
short arr_2 [11] ;
unsigned int arr_5 [16] [16] ;
unsigned long long int arr_6 [16] ;
short arr_9 [16] ;
unsigned int arr_10 [16] [16] ;
_Bool arr_11 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 665220767U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (short)-25108;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = 1244549898U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (unsigned short)35985;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = (short)11190;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = (short)-5132;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (short)-20119;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = 3362269656U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = 8394910785726783950ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (short)-9126 : (short)21580;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_10 [i_0] [i_1] = (i_1 % 2 == 0) ? 1209275991U : 4005383622U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
