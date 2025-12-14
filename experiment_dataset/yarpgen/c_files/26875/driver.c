#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -485808228;
short var_1 = (short)25223;
long long int var_2 = -3632967868183316555LL;
unsigned int var_3 = 386757950U;
signed char var_5 = (signed char)78;
signed char var_6 = (signed char)-60;
signed char var_7 = (signed char)35;
signed char var_9 = (signed char)78;
signed char var_10 = (signed char)60;
unsigned char var_11 = (unsigned char)84;
signed char var_12 = (signed char)62;
short var_15 = (short)9890;
_Bool var_16 = (_Bool)1;
int var_17 = -235634395;
_Bool var_18 = (_Bool)0;
int zero = 0;
short var_19 = (short)-12911;
_Bool var_20 = (_Bool)0;
short var_21 = (short)21326;
signed char var_22 = (signed char)-41;
long long int var_23 = 8058073688264767872LL;
int var_24 = 2634355;
unsigned short var_25 = (unsigned short)36462;
unsigned int var_26 = 758171698U;
short var_27 = (short)-17734;
unsigned char var_28 = (unsigned char)171;
unsigned long long int arr_2 [12] [12] ;
int arr_10 [12] [12] [12] ;
unsigned short arr_11 [12] [12] [12] [12] [12] ;
unsigned int arr_20 [16] ;
long long int arr_22 [16] ;
_Bool arr_23 [16] [16] ;
unsigned int arr_25 [16] ;
_Bool arr_12 [12] [12] [12] [12] [12] ;
_Bool arr_13 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = 10062170532288023258ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -931636727 : 289220707;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? (unsigned short)48912 : (unsigned short)53556;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_20 [i_0] = 266748627U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_22 [i_0] = 597805042207520827LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_23 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_25 [i_0] = 1099507922U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_13 [i_0] [i_1] = (_Bool)0;
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        hash(&seed, arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
