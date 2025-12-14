#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-24472;
short var_5 = (short)23220;
short var_7 = (short)1929;
unsigned int var_8 = 3842791439U;
_Bool var_9 = (_Bool)1;
unsigned short var_12 = (unsigned short)44162;
_Bool var_13 = (_Bool)1;
unsigned short var_16 = (unsigned short)51604;
_Bool var_18 = (_Bool)0;
int zero = 0;
signed char var_19 = (signed char)-13;
signed char var_20 = (signed char)43;
short var_21 = (short)-18991;
short var_22 = (short)191;
unsigned int var_23 = 3750384655U;
short var_24 = (short)-17334;
unsigned int var_25 = 542787208U;
signed char var_26 = (signed char)-81;
unsigned short var_27 = (unsigned short)39064;
signed char arr_0 [20] ;
unsigned long long int arr_1 [20] ;
long long int arr_3 [20] ;
_Bool arr_4 [20] [20] ;
unsigned int arr_5 [20] [20] ;
long long int arr_9 [20] [20] ;
short arr_12 [15] ;
unsigned short arr_6 [20] ;
unsigned char arr_7 [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (signed char)34 : (signed char)-29;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 17644703368879411358ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = 3775558202085728669LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? 2358925761U : 275324315U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_9 [i_0] [i_1] = (i_1 % 2 == 0) ? 8958302914050979395LL : -1005466935871234367LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_12 [i_0] = (short)25303;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned short)38734 : (unsigned short)15987;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)123 : (unsigned char)169;
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
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
