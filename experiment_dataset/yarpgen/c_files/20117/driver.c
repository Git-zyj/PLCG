#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_1 = -473800945900124138LL;
signed char var_3 = (signed char)-119;
signed char var_4 = (signed char)-62;
unsigned short var_5 = (unsigned short)65391;
short var_6 = (short)-32717;
short var_7 = (short)-6521;
int var_9 = -1288135890;
unsigned int var_10 = 60319559U;
signed char var_11 = (signed char)122;
_Bool var_12 = (_Bool)0;
int zero = 0;
int var_13 = 194629176;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 2580695231U;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)80;
int var_18 = 936957430;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)34;
unsigned int var_21 = 116508490U;
unsigned int var_22 = 285055620U;
long long int arr_0 [18] [18] ;
unsigned char arr_3 [18] [18] ;
unsigned int arr_4 [18] [18] ;
int arr_12 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = -7936597940542607343LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)12;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = 2357234686U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_12 [i_0] [i_1] = (i_0 % 2 == 0) ? 1962352607 : -1168218096;
}

void checksum() {
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
