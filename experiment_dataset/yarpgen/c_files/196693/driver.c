#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)29350;
unsigned long long int var_1 = 11672832553082324566ULL;
int var_2 = 1525582669;
unsigned short var_3 = (unsigned short)37517;
unsigned short var_4 = (unsigned short)27526;
unsigned long long int var_6 = 11513599007880889151ULL;
int var_7 = 692825465;
long long int var_8 = 773087944019506278LL;
unsigned long long int var_9 = 7382900779899604798ULL;
int zero = 0;
unsigned int var_10 = 3849569361U;
short var_11 = (short)-523;
unsigned short var_12 = (unsigned short)33135;
unsigned short var_13 = (unsigned short)23922;
long long int var_14 = -7455246450403744263LL;
unsigned long long int var_15 = 824117841562663208ULL;
long long int var_16 = 4065446106462221905LL;
unsigned long long int var_17 = 1839561161486282822ULL;
_Bool arr_5 [17] ;
unsigned short arr_6 [17] [17] ;
unsigned long long int arr_7 [17] ;
int arr_8 [17] ;
short arr_12 [22] ;
_Bool arr_3 [13] ;
long long int arr_4 [13] [13] ;
unsigned long long int arr_9 [17] ;
unsigned char arr_10 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)63949;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = 18264247799196694303ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = -767127682;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_12 [i_0] = (short)-1892;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = -2177664761567400334LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_9 [i_0] = 13152716316987271022ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_10 [i_0] = (unsigned char)100;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
