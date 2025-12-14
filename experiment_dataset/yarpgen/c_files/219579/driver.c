#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)89;
int var_1 = -715157529;
long long int var_3 = 4530237340493398624LL;
unsigned int var_4 = 2189145471U;
unsigned int var_5 = 3309583776U;
int var_6 = 596940626;
unsigned int var_7 = 266574928U;
unsigned int var_8 = 1187705276U;
_Bool var_9 = (_Bool)1;
short var_10 = (short)-17736;
short var_11 = (short)31572;
unsigned long long int var_12 = 16586271504276962876ULL;
unsigned long long int var_13 = 2618323889073993169ULL;
short var_14 = (short)-22733;
_Bool var_15 = (_Bool)1;
int zero = 0;
int var_16 = -1323675449;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 5134527825987873253ULL;
signed char var_19 = (signed char)-6;
long long int arr_2 [18] ;
long long int arr_7 [18] [18] [18] ;
signed char arr_8 [18] [18] [18] [18] ;
long long int arr_12 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 5528759716164965954LL : 256319469145476850LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 6638721078608662427LL : 1797303197174475821LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (signed char)-11 : (signed char)64;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_12 [i_0] = -1888203867201175748LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    hash(&seed, arr_8 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
