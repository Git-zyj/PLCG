#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2152612077U;
unsigned char var_1 = (unsigned char)18;
int var_2 = 141015528;
unsigned long long int var_3 = 17624327206697667447ULL;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)1;
int var_7 = 912277415;
unsigned short var_9 = (unsigned short)16410;
unsigned short var_11 = (unsigned short)14929;
int zero = 0;
int var_12 = 52658311;
unsigned int var_13 = 4291699765U;
unsigned long long int var_14 = 7258113593300147493ULL;
unsigned int var_15 = 4256097672U;
unsigned short var_16 = (unsigned short)17032;
unsigned char var_17 = (unsigned char)116;
unsigned short var_18 = (unsigned short)54215;
int var_19 = 1603306338;
_Bool arr_3 [17] ;
_Bool arr_4 [17] [17] ;
unsigned short arr_6 [17] ;
short arr_2 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = (unsigned short)15217;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (short)-22296;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
