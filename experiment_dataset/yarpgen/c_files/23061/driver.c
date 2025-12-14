#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1718808319U;
signed char var_2 = (signed char)11;
unsigned char var_4 = (unsigned char)36;
short var_7 = (short)21822;
_Bool var_9 = (_Bool)0;
signed char var_10 = (signed char)-26;
unsigned short var_16 = (unsigned short)26383;
long long int var_18 = -3646753582354465682LL;
int zero = 0;
unsigned char var_19 = (unsigned char)200;
unsigned int var_20 = 3740293792U;
_Bool var_21 = (_Bool)0;
short var_22 = (short)2008;
unsigned char var_23 = (unsigned char)43;
long long int var_24 = -6571765889760092072LL;
unsigned char var_25 = (unsigned char)140;
unsigned long long int var_26 = 5994873097004069766ULL;
unsigned int arr_0 [12] ;
signed char arr_1 [12] ;
unsigned long long int arr_3 [12] [12] ;
unsigned long long int arr_4 [12] [12] [12] [12] ;
unsigned short arr_5 [12] ;
unsigned int arr_7 [12] [12] [12] [12] [12] ;
short arr_13 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 2265092796U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (signed char)-85;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? 11294781888965698794ULL : 17676312457087235656ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_4 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 900491038228109246ULL : 16770794117612987126ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned short)53398 : (unsigned short)32633;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_7 [i_0] [i_1] [i_2] [i_3] [i_4] = 2389208399U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_13 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-3444 : (short)-23733;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
