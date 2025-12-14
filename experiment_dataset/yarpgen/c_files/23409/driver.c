#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 567318757475488519LL;
_Bool var_4 = (_Bool)1;
unsigned long long int var_8 = 4153692555443550982ULL;
unsigned int var_9 = 2327558912U;
signed char var_11 = (signed char)30;
short var_13 = (short)-17062;
unsigned short var_15 = (unsigned short)10130;
unsigned short var_16 = (unsigned short)12619;
unsigned char var_17 = (unsigned char)175;
int zero = 0;
unsigned short var_18 = (unsigned short)50741;
long long int var_19 = -2339903609959186060LL;
signed char var_20 = (signed char)85;
int var_21 = 1891657331;
int var_22 = -692391896;
signed char arr_0 [22] ;
_Bool arr_1 [22] ;
signed char arr_2 [22] [22] ;
int arr_4 [22] ;
signed char arr_5 [22] [22] [22] [22] ;
signed char arr_7 [22] ;
unsigned int arr_8 [22] ;
int arr_10 [22] ;
int arr_11 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (signed char)87;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-101 : (signed char)-2;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 570885884 : -1261053787;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (signed char)20;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = (signed char)-62;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = 2551427315U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? -1343509568 : 1655994916;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? -1651987120 : -1216376943;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
