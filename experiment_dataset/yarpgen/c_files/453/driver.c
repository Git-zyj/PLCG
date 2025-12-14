#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8903752309596808685ULL;
_Bool var_2 = (_Bool)0;
short var_3 = (short)-26703;
int var_4 = -1204169146;
unsigned int var_8 = 1938021468U;
int var_9 = -798850936;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)1;
unsigned char var_15 = (unsigned char)90;
unsigned char var_17 = (unsigned char)168;
int zero = 0;
unsigned int var_18 = 1973909674U;
unsigned int var_19 = 999467425U;
signed char var_20 = (signed char)-119;
unsigned long long int var_21 = 8618267072961006359ULL;
unsigned char var_22 = (unsigned char)54;
unsigned long long int var_23 = 15733405780548150041ULL;
unsigned long long int arr_1 [24] [24] ;
unsigned long long int arr_2 [24] [24] ;
short arr_5 [24] [24] [24] [24] ;
long long int arr_6 [24] [24] [24] [24] ;
unsigned long long int arr_7 [24] ;
unsigned long long int arr_8 [24] [24] [24] [24] ;
signed char arr_10 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? 765473624511561214ULL : 5632601578762403778ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? 8932824065268997104ULL : 13093751897960372098ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (short)-14521;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = -8435369789142101093LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = 7713025745144717053ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = 9534435113067844353ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (signed char)-78 : (signed char)-127;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
