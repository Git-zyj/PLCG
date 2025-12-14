#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5366244461860137895LL;
unsigned int var_1 = 2026801468U;
_Bool var_3 = (_Bool)1;
unsigned int var_4 = 3012419912U;
signed char var_7 = (signed char)20;
unsigned long long int var_8 = 2628364130054626522ULL;
_Bool var_9 = (_Bool)0;
long long int var_10 = -4201085427718212381LL;
long long int var_11 = 1689778068458818053LL;
unsigned int var_12 = 746509419U;
unsigned long long int var_14 = 7839081202601621197ULL;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 2910248888U;
long long int var_17 = 222673243114856277LL;
long long int var_18 = -2092977808870467287LL;
long long int var_19 = -8587909113337852912LL;
long long int var_20 = -8113506688179527787LL;
long long int var_21 = 5350507115133742492LL;
_Bool var_22 = (_Bool)1;
long long int var_23 = -8398942116098525350LL;
unsigned int var_24 = 3168705794U;
signed char var_25 = (signed char)-101;
_Bool var_26 = (_Bool)0;
unsigned int var_27 = 418164233U;
_Bool arr_0 [15] ;
unsigned int arr_4 [15] [15] ;
long long int arr_11 [15] [15] [15] [15] [15] ;
signed char arr_15 [15] [15] [15] [15] [15] ;
unsigned long long int arr_17 [15] [15] ;
unsigned int arr_20 [15] [15] ;
int arr_5 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = 3517362272U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = -7287214237518585071LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)31;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_17 [i_0] [i_1] = 11898251141373291984ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_20 [i_0] [i_1] = 829245463U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_5 [i_0] [i_1] = -533524086;
}

void checksum() {
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
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
