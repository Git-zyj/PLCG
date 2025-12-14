#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-21448;
unsigned short var_2 = (unsigned short)61870;
int var_3 = -289728335;
unsigned long long int var_4 = 12076038049034687199ULL;
int var_6 = 1937002442;
unsigned long long int var_7 = 3392026303421679481ULL;
int zero = 0;
unsigned char var_11 = (unsigned char)0;
signed char var_12 = (signed char)-17;
int var_13 = -457874852;
long long int var_14 = -6258624901588000760LL;
short var_15 = (short)-266;
unsigned char var_16 = (unsigned char)104;
long long int var_17 = 3993575196568368923LL;
_Bool var_18 = (_Bool)1;
unsigned short var_19 = (unsigned short)32119;
unsigned short var_20 = (unsigned short)54857;
_Bool var_21 = (_Bool)0;
int var_22 = -232719572;
_Bool arr_0 [11] [11] ;
unsigned char arr_1 [11] ;
short arr_4 [11] ;
_Bool arr_6 [11] ;
unsigned int arr_7 [11] [11] [11] ;
signed char arr_9 [11] [11] ;
long long int arr_2 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (unsigned char)122;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (short)26397;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 1345864333U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_9 [i_0] [i_1] = (signed char)29;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? -401432062754612190LL : -2058051724295049912LL;
}

void checksum() {
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
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
