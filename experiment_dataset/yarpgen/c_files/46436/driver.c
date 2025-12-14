#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2778038454U;
unsigned long long int var_1 = 8322570772730151000ULL;
long long int var_3 = -3887335747864151236LL;
unsigned short var_4 = (unsigned short)38945;
unsigned long long int var_5 = 4190102794354450711ULL;
unsigned char var_6 = (unsigned char)179;
unsigned long long int var_7 = 3602054578830237613ULL;
_Bool var_8 = (_Bool)1;
unsigned int var_9 = 2089777024U;
int zero = 0;
long long int var_10 = 884251330899764158LL;
unsigned int var_11 = 2066155872U;
unsigned long long int var_12 = 438550155190916527ULL;
unsigned int var_13 = 3188017815U;
signed char var_14 = (signed char)-13;
unsigned short var_15 = (unsigned short)38305;
long long int var_16 = 7218529864926894686LL;
signed char var_17 = (signed char)44;
unsigned long long int var_18 = 3574315838700681680ULL;
unsigned long long int var_19 = 9703781767491040440ULL;
unsigned short arr_0 [18] ;
unsigned long long int arr_1 [18] [18] ;
short arr_2 [18] ;
_Bool arr_3 [18] ;
unsigned long long int arr_4 [18] ;
unsigned short arr_6 [18] [18] [18] ;
unsigned long long int arr_5 [18] [18] ;
signed char arr_11 [18] ;
signed char arr_12 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (unsigned short)25550;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = 15771850051678046746ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (short)26854;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = 17685615191109807137ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned short)4886;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? 13686903564559690283ULL : 3231185919379943511ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (signed char)77 : (signed char)30;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_12 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)(-127 - 1) : (signed char)-88;
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
