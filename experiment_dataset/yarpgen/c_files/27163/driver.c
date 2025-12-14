#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)28296;
unsigned long long int var_8 = 13878991701122823245ULL;
short var_9 = (short)-14260;
long long int var_10 = -1845471219907450295LL;
int var_11 = 598860443;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)65;
unsigned int var_16 = 872924164U;
int zero = 0;
long long int var_17 = -3317938483951858611LL;
long long int var_18 = 7587641684869147670LL;
short var_19 = (short)-9103;
short var_20 = (short)916;
short var_21 = (short)19613;
unsigned long long int var_22 = 5146862376026699495ULL;
int var_23 = -1868029893;
signed char var_24 = (signed char)-69;
long long int var_25 = -648777331434576568LL;
unsigned long long int arr_0 [22] [22] ;
unsigned long long int arr_1 [22] ;
signed char arr_2 [22] [22] ;
unsigned short arr_3 [22] ;
unsigned long long int arr_4 [22] ;
short arr_7 [18] [18] ;
unsigned long long int arr_8 [18] ;
signed char arr_10 [18] [18] ;
_Bool arr_14 [18] [18] [18] ;
unsigned char arr_5 [22] [22] [22] ;
unsigned long long int arr_6 [22] ;
_Bool arr_13 [18] ;
unsigned short arr_17 [18] ;
signed char arr_18 [18] [18] [18] ;
short arr_19 [18] [18] ;
signed char arr_20 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = 5200969705797371625ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 11532622500951374239ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)-64;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (unsigned short)25203;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = 6845989999696926870ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_7 [i_0] [i_1] = (short)-16149;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_8 [i_0] = 12547576779633750499ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_10 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)46 : (signed char)-14;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)11 : (unsigned char)132;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = 8662820539874284751ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? (unsigned short)31943 : (unsigned short)11306;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (signed char)115 : (signed char)27;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_19 [i_0] [i_1] = (short)21518;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_20 [i_0] [i_1] = (signed char)-79;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_18 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_20 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
