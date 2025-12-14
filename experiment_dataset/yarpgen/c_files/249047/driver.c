#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1587557039U;
unsigned short var_2 = (unsigned short)17713;
unsigned short var_4 = (unsigned short)51486;
_Bool var_6 = (_Bool)1;
int var_7 = -2145825471;
short var_9 = (short)5537;
_Bool var_10 = (_Bool)0;
unsigned long long int var_13 = 9401343343301329290ULL;
unsigned long long int var_14 = 3102629749134757542ULL;
short var_15 = (short)-24277;
int var_16 = 725263786;
short var_17 = (short)-32424;
unsigned short var_18 = (unsigned short)59832;
int zero = 0;
short var_20 = (short)-19539;
long long int var_21 = -2293475942140852552LL;
int var_22 = 1268541774;
unsigned char var_23 = (unsigned char)183;
short var_24 = (short)14446;
unsigned char arr_0 [12] [12] ;
long long int arr_1 [12] ;
unsigned char arr_2 [12] [12] ;
long long int arr_3 [12] [12] ;
short arr_4 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)146;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = -6959698207793378567LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)21;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = 2632920810291279068LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (short)-8337;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
