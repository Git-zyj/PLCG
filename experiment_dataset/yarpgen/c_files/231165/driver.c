#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)108;
short var_5 = (short)-10290;
_Bool var_6 = (_Bool)0;
long long int var_7 = 8094162085476006258LL;
int var_8 = -801098608;
unsigned char var_9 = (unsigned char)26;
int var_11 = 1976759839;
unsigned char var_14 = (unsigned char)61;
unsigned long long int var_15 = 7382441017628615740ULL;
unsigned long long int var_16 = 17163141219483604112ULL;
int var_17 = -1346936137;
int zero = 0;
unsigned long long int var_18 = 5305810034677148613ULL;
int var_19 = 137605185;
long long int var_20 = -2553178098655324348LL;
unsigned long long int var_21 = 9727669292160602189ULL;
_Bool var_22 = (_Bool)1;
int var_23 = -1370371953;
_Bool var_24 = (_Bool)0;
int var_25 = -550654147;
int var_26 = -423081673;
unsigned long long int var_27 = 6566753777604571777ULL;
_Bool var_28 = (_Bool)0;
long long int arr_0 [14] ;
int arr_1 [14] [14] ;
short arr_2 [14] ;
unsigned short arr_3 [14] [14] [14] ;
unsigned char arr_5 [14] [14] ;
long long int arr_14 [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 1545491555114062306LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = 1226887281;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (short)-29153 : (short)-18040;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)23030 : (unsigned short)62371;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)200;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = 6667129336020732259LL;
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
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
