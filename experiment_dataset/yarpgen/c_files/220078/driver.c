#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)97;
unsigned int var_2 = 961776965U;
unsigned char var_3 = (unsigned char)23;
signed char var_4 = (signed char)-76;
short var_5 = (short)25791;
long long int var_6 = -2220848634747321026LL;
short var_7 = (short)29483;
unsigned short var_9 = (unsigned short)25039;
_Bool var_10 = (_Bool)0;
unsigned long long int var_12 = 9936666016164562187ULL;
short var_13 = (short)2765;
long long int var_14 = -6331040892182284620LL;
unsigned int var_15 = 3892483798U;
unsigned int var_16 = 175894618U;
unsigned int var_17 = 2309963402U;
long long int var_18 = -433933768067960321LL;
int zero = 0;
unsigned char var_19 = (unsigned char)38;
int var_20 = 998390094;
unsigned char var_21 = (unsigned char)141;
signed char var_22 = (signed char)-116;
signed char var_23 = (signed char)80;
unsigned short var_24 = (unsigned short)41165;
short var_25 = (short)-15366;
_Bool var_26 = (_Bool)0;
signed char var_27 = (signed char)33;
_Bool arr_8 [14] [14] [14] ;
short arr_14 [14] [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (short)31999 : (short)-10227;
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    hash(&seed, arr_14 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
