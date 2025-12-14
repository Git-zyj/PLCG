#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-112;
_Bool var_1 = (_Bool)0;
unsigned short var_2 = (unsigned short)21232;
unsigned long long int var_3 = 2640544939194938479ULL;
unsigned short var_4 = (unsigned short)18979;
signed char var_5 = (signed char)-98;
unsigned char var_6 = (unsigned char)5;
int var_7 = 184756052;
signed char var_8 = (signed char)22;
unsigned int var_9 = 3270782825U;
int var_10 = 712924218;
signed char var_11 = (signed char)73;
int var_12 = 629333987;
signed char var_13 = (signed char)24;
signed char var_14 = (signed char)-87;
unsigned long long int var_15 = 770448374455075875ULL;
int zero = 0;
signed char var_16 = (signed char)0;
unsigned int var_17 = 654556844U;
signed char var_18 = (signed char)100;
short var_19 = (short)-20165;
long long int var_20 = -1637237172921657882LL;
unsigned int var_21 = 3597977927U;
unsigned int var_22 = 312956909U;
unsigned int var_23 = 1392685790U;
signed char arr_0 [12] ;
int arr_1 [12] ;
unsigned long long int arr_2 [12] [12] ;
int arr_3 [12] ;
long long int arr_4 [12] ;
unsigned short arr_5 [12] [12] ;
signed char arr_6 [12] [12] ;
_Bool arr_7 [12] [12] [12] ;
unsigned short arr_8 [12] [12] [12] ;
short arr_9 [12] [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (signed char)77;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? -738640686 : -1015916787;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = 8193059005634710305ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = 1926941095;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? -2381016393628245739LL : 7404444647447326759LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)4353;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)99;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (unsigned short)12770;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (short)-5432;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
