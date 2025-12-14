#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 982647575U;
_Bool var_2 = (_Bool)0;
int var_4 = 486416864;
unsigned int var_5 = 3876295226U;
_Bool var_6 = (_Bool)0;
int var_7 = 1735065224;
int var_8 = 381984660;
unsigned short var_10 = (unsigned short)7309;
signed char var_11 = (signed char)27;
int var_12 = -1630428970;
unsigned short var_15 = (unsigned short)64615;
int zero = 0;
long long int var_16 = -7638406911505748768LL;
unsigned short var_17 = (unsigned short)21522;
unsigned short var_18 = (unsigned short)48027;
unsigned long long int var_19 = 4983257794892787345ULL;
int var_20 = -1327839727;
signed char var_21 = (signed char)9;
int var_22 = 2117549374;
unsigned long long int var_23 = 10573184892801190815ULL;
unsigned short var_24 = (unsigned short)19244;
unsigned int var_25 = 2571605218U;
unsigned short var_26 = (unsigned short)29775;
signed char arr_0 [21] ;
int arr_1 [21] ;
_Bool arr_3 [10] ;
unsigned long long int arr_5 [20] ;
_Bool arr_6 [20] ;
unsigned short arr_7 [20] [20] ;
short arr_2 [21] ;
unsigned short arr_10 [13] ;
int arr_11 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (signed char)-67;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 419460463;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = 5679772345708614461ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned short)48298;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (short)-7061;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_10 [i_0] = (unsigned short)16300;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_11 [i_0] = 275935935;
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
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
