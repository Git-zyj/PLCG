#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 136887832079529977ULL;
signed char var_1 = (signed char)104;
_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 7287213697632779564ULL;
_Bool var_5 = (_Bool)1;
unsigned long long int var_6 = 7695570601806301181ULL;
signed char var_7 = (signed char)-47;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned char var_10 = (unsigned char)141;
unsigned char var_11 = (unsigned char)193;
unsigned char var_12 = (unsigned char)101;
unsigned char var_13 = (unsigned char)137;
unsigned long long int var_14 = 6589297957705853646ULL;
unsigned char var_15 = (unsigned char)95;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 14858107552766064618ULL;
unsigned long long int var_18 = 6209091923620180125ULL;
signed char var_19 = (signed char)-91;
signed char var_20 = (signed char)-70;
signed char var_21 = (signed char)-55;
_Bool arr_0 [18] ;
signed char arr_1 [18] [18] ;
signed char arr_2 [18] ;
signed char arr_3 [18] [18] ;
signed char arr_4 [18] ;
unsigned long long int arr_5 [18] ;
unsigned long long int arr_6 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-97;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (signed char)-113 : (signed char)-107;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)-1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (signed char)-8;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 3808553985814329986ULL : 16914243948455173171ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = 11771964369989053197ULL;
}

void checksum() {
    hash(&seed, var_10);
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
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
