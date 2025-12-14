#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4411633768285261467LL;
_Bool var_1 = (_Bool)0;
unsigned short var_2 = (unsigned short)11544;
unsigned long long int var_3 = 14339124462711988491ULL;
signed char var_4 = (signed char)15;
long long int var_5 = 7451727021810052038LL;
long long int var_6 = 7616435134708827063LL;
unsigned int var_7 = 2262497095U;
signed char var_8 = (signed char)110;
signed char var_10 = (signed char)64;
unsigned short var_12 = (unsigned short)42444;
int var_14 = 1552451963;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned int var_16 = 3844061062U;
unsigned short var_17 = (unsigned short)3031;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 1691278844U;
signed char var_20 = (signed char)76;
long long int var_21 = -3880508698679800898LL;
short var_22 = (short)20137;
unsigned int var_23 = 735832244U;
_Bool var_24 = (_Bool)1;
unsigned int var_25 = 1432672776U;
_Bool var_26 = (_Bool)1;
unsigned short var_27 = (unsigned short)28837;
signed char var_28 = (signed char)65;
unsigned short arr_0 [25] [25] ;
long long int arr_1 [25] ;
unsigned int arr_4 [25] ;
unsigned long long int arr_5 [25] [25] ;
unsigned short arr_6 [25] [25] [25] [25] ;
unsigned long long int arr_8 [25] [25] [25] [25] ;
unsigned long long int arr_10 [25] [25] [25] [25] [25] [25] ;
unsigned short arr_11 [25] [25] [25] [25] [25] ;
unsigned short arr_2 [25] ;
long long int arr_9 [25] ;
unsigned int arr_15 [25] [25] [25] [25] [25] ;
unsigned long long int arr_26 [18] ;
_Bool arr_27 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)61083;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = -5353116295568595024LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = 3516860731U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_5 [i_0] [i_1] = 17877461797593016113ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (unsigned short)61118;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = 3833706061984845029ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 8547802200250006715ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)39266;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (unsigned short)26979;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_9 [i_0] = -6828048879463371845LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = 4193013322U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_26 [i_0] = (i_0 % 2 == 0) ? 2545150859601257309ULL : 10524449681664878707ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_27 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
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
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        hash(&seed, arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_26 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_27 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
