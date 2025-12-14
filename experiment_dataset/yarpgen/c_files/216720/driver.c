#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)75;
int var_4 = 1059238798;
unsigned short var_5 = (unsigned short)25205;
unsigned long long int var_6 = 9043337011463992878ULL;
unsigned long long int var_12 = 60360777329802811ULL;
_Bool var_13 = (_Bool)1;
long long int var_14 = 2896076416103895547LL;
unsigned long long int var_15 = 15359825105918937566ULL;
signed char var_16 = (signed char)40;
unsigned short var_18 = (unsigned short)49089;
int zero = 0;
signed char var_19 = (signed char)-23;
_Bool var_20 = (_Bool)1;
int var_21 = -720123815;
unsigned short var_22 = (unsigned short)11431;
unsigned long long int var_23 = 8728577169256744360ULL;
_Bool var_24 = (_Bool)0;
_Bool var_25 = (_Bool)0;
unsigned char var_26 = (unsigned char)51;
long long int arr_0 [17] ;
int arr_1 [17] ;
short arr_2 [17] [17] ;
int arr_3 [17] ;
int arr_5 [17] ;
unsigned int arr_9 [11] ;
short arr_14 [20] ;
unsigned int arr_6 [17] ;
unsigned short arr_7 [17] ;
signed char arr_8 [17] ;
unsigned long long int arr_11 [11] ;
unsigned long long int arr_12 [11] ;
unsigned int arr_16 [20] [20] ;
unsigned long long int arr_17 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = -2389694139645644331LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = -118458177;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = (short)10688;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = 111400057;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = -1830252241;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_9 [i_0] = 198742867U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_14 [i_0] = (short)-32683;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = 4224184812U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = (unsigned short)65125;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = (signed char)35;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? 4812316283784076785ULL : 16272964668458419134ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? 80004824902248285ULL : 5700167538956073076ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_16 [i_0] [i_1] = 3759793192U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_17 [i_0] = 6938887118132182410ULL;
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
