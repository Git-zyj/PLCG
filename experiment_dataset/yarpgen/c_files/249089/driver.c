#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)22530;
short var_1 = (short)-30162;
short var_2 = (short)22056;
unsigned short var_3 = (unsigned short)28317;
unsigned short var_4 = (unsigned short)59919;
int var_5 = -1246673094;
unsigned long long int var_6 = 17482317227122161605ULL;
unsigned short var_7 = (unsigned short)9564;
unsigned short var_8 = (unsigned short)33406;
unsigned short var_10 = (unsigned short)25328;
int zero = 0;
unsigned short var_11 = (unsigned short)33860;
int var_12 = 1027283598;
signed char var_13 = (signed char)79;
int var_14 = -245885879;
long long int var_15 = -4890191463789491359LL;
signed char var_16 = (signed char)-58;
int var_17 = 1009002422;
short var_18 = (short)-20884;
unsigned short var_19 = (unsigned short)59356;
unsigned short var_20 = (unsigned short)12507;
long long int arr_0 [19] ;
unsigned short arr_1 [19] ;
int arr_3 [11] ;
signed char arr_4 [11] [11] ;
signed char arr_5 [11] ;
int arr_6 [23] [23] ;
unsigned short arr_7 [23] ;
short arr_8 [23] [23] ;
unsigned short arr_11 [25] [25] ;
unsigned long long int arr_2 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = -3803462974698575889LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (unsigned short)60377;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = 1784896083;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)74;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (signed char)81;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_6 [i_0] [i_1] = 82580895;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = (unsigned short)35880;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_8 [i_0] [i_1] = (short)-23915;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_11 [i_0] [i_1] = (unsigned short)61374;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = 9833309392103471445ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
