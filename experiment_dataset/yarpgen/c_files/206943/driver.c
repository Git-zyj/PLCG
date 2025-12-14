#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6566231430368245704LL;
short var_2 = (short)9193;
long long int var_3 = 1602914199118656056LL;
_Bool var_4 = (_Bool)1;
unsigned char var_5 = (unsigned char)235;
short var_6 = (short)23155;
unsigned char var_7 = (unsigned char)105;
signed char var_8 = (signed char)85;
signed char var_9 = (signed char)73;
unsigned long long int var_10 = 15055556230531656266ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)11073;
short var_12 = (short)29439;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 10902884140936006800ULL;
unsigned short var_15 = (unsigned short)64471;
int arr_0 [15] ;
short arr_2 [15] ;
int arr_5 [15] [15] ;
_Bool arr_6 [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 805893961;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (short)-5816 : (short)-20077;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_5 [i_0] [i_1] = 2068194854;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
