#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)47968;
unsigned long long int var_2 = 5478200216590873554ULL;
signed char var_3 = (signed char)-90;
long long int var_4 = -370008774283737193LL;
int var_5 = 1191587044;
unsigned char var_6 = (unsigned char)214;
int var_10 = 136344617;
short var_11 = (short)26040;
unsigned long long int var_12 = 2652313038975525206ULL;
_Bool var_13 = (_Bool)1;
long long int var_15 = 4447119970491502578LL;
long long int var_16 = -2037029918979580243LL;
_Bool var_19 = (_Bool)0;
int zero = 0;
signed char var_20 = (signed char)49;
int var_21 = -623799446;
unsigned short var_22 = (unsigned short)61358;
unsigned int var_23 = 3236329751U;
unsigned long long int var_24 = 18252409585584918954ULL;
unsigned int var_25 = 3730568245U;
_Bool var_26 = (_Bool)0;
unsigned short var_27 = (unsigned short)45583;
unsigned int var_28 = 2978010450U;
int arr_0 [19] ;
unsigned char arr_1 [19] [19] ;
_Bool arr_3 [19] [19] ;
int arr_7 [19] ;
unsigned short arr_2 [19] ;
int arr_5 [19] ;
long long int arr_8 [19] [19] [19] ;
long long int arr_9 [19] [19] ;
signed char arr_10 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = -1119572913;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)226;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = 226621444;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (unsigned short)14619;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? -1486588044 : -25023012;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 5912861274980929885LL : -8200661244558533707LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_9 [i_0] [i_1] = (i_0 % 2 == 0) ? -4389354099679938498LL : -6292878262122440395LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_10 [i_0] = (signed char)20;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
