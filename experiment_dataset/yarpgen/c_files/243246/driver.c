#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_1 = (short)-6854;
int var_4 = 278643127;
int var_5 = 973313519;
unsigned long long int var_6 = 6893311143599502354ULL;
signed char var_7 = (signed char)-108;
_Bool var_8 = (_Bool)1;
int var_9 = -1039058797;
unsigned short var_10 = (unsigned short)28671;
unsigned int var_11 = 162545229U;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)69;
unsigned int var_14 = 123869001U;
short var_15 = (short)-17245;
unsigned long long int var_16 = 12817244708265184817ULL;
unsigned char var_18 = (unsigned char)159;
int zero = 0;
unsigned short var_19 = (unsigned short)21446;
unsigned int var_20 = 3107557703U;
short var_21 = (short)-30325;
unsigned long long int var_22 = 7591496362705800990ULL;
unsigned long long int var_23 = 8328934048575145545ULL;
_Bool var_24 = (_Bool)0;
_Bool var_25 = (_Bool)1;
unsigned char var_26 = (unsigned char)255;
short var_27 = (short)9620;
signed char var_28 = (signed char)-109;
short var_29 = (short)-21292;
_Bool arr_0 [10] [10] ;
signed char arr_1 [10] ;
short arr_2 [10] ;
unsigned short arr_4 [14] ;
short arr_5 [21] [21] ;
unsigned long long int arr_7 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (signed char)-47;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (short)22829;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (unsigned short)51163;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-26952 : (short)3287;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? 4060121667753494734ULL : 12619613400400996204ULL;
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
    hash(&seed, var_28);
    hash(&seed, var_29);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
