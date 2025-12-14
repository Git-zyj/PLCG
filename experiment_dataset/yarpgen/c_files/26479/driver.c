#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)220;
long long int var_1 = 5622116153944684259LL;
int var_2 = -2115748221;
unsigned long long int var_3 = 7761521633457077459ULL;
int var_4 = 774455990;
signed char var_5 = (signed char)20;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 10438698073786526971ULL;
unsigned short var_8 = (unsigned short)65498;
short var_9 = (short)-16110;
short var_10 = (short)-7287;
unsigned short var_11 = (unsigned short)338;
signed char var_12 = (signed char)-24;
signed char var_13 = (signed char)-82;
int zero = 0;
unsigned short var_14 = (unsigned short)64771;
short var_15 = (short)25978;
unsigned short var_16 = (unsigned short)61160;
int var_17 = -531509195;
_Bool var_18 = (_Bool)0;
unsigned short var_19 = (unsigned short)34722;
int var_20 = 1351568423;
_Bool var_21 = (_Bool)0;
unsigned long long int arr_0 [24] ;
int arr_2 [24] ;
signed char arr_6 [24] [24] [24] [24] ;
unsigned int arr_7 [24] [24] [24] ;
unsigned short arr_12 [11] ;
unsigned short arr_13 [11] [11] ;
unsigned short arr_16 [11] [11] [11] [11] ;
signed char arr_17 [11] [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 3687056981871363070ULL : 17390374774898682186ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 176094968;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (signed char)-101;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 4100598685U : 1457618986U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_12 [i_0] = (unsigned short)6015;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_13 [i_0] [i_1] = (unsigned short)10027;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (unsigned short)39315;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (signed char)41;
}

void checksum() {
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
