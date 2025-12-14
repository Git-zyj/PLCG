#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)37098;
short var_1 = (short)31511;
short var_2 = (short)12008;
short var_5 = (short)-22423;
unsigned short var_6 = (unsigned short)50383;
unsigned short var_7 = (unsigned short)58019;
unsigned char var_8 = (unsigned char)188;
unsigned short var_11 = (unsigned short)22885;
unsigned short var_12 = (unsigned short)38587;
unsigned short var_13 = (unsigned short)24057;
int zero = 0;
unsigned short var_14 = (unsigned short)26091;
unsigned short var_15 = (unsigned short)17527;
short var_16 = (short)-14303;
short var_17 = (short)13052;
short var_18 = (short)8813;
unsigned short var_19 = (unsigned short)16612;
short var_20 = (short)9575;
unsigned char var_21 = (unsigned char)221;
unsigned short var_22 = (unsigned short)51391;
unsigned short var_23 = (unsigned short)5810;
unsigned char var_24 = (unsigned char)250;
short arr_0 [10] ;
short arr_1 [10] [10] ;
unsigned short arr_6 [10] ;
short arr_7 [10] ;
unsigned short arr_8 [10] ;
unsigned char arr_4 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (short)13873;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-21551;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = (unsigned short)46280;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = (short)4838;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_8 [i_0] = (unsigned short)62096;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned char)213 : (unsigned char)245;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
