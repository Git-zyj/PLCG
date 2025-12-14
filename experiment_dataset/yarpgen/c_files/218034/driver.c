#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1042140578U;
int var_2 = 2034312589;
unsigned short var_3 = (unsigned short)1562;
_Bool var_4 = (_Bool)1;
unsigned short var_5 = (unsigned short)1179;
long long int var_6 = 4467927317694416346LL;
_Bool var_8 = (_Bool)1;
unsigned short var_9 = (unsigned short)45085;
long long int var_10 = -1167548624894893672LL;
unsigned int var_11 = 1167154626U;
unsigned char var_12 = (unsigned char)53;
unsigned int var_13 = 73776718U;
int zero = 0;
unsigned int var_15 = 3418108969U;
short var_16 = (short)-7931;
long long int var_17 = 3139015316583099428LL;
int var_18 = -1198554067;
long long int var_19 = -3596138722300465764LL;
long long int var_20 = -6150759146847652570LL;
unsigned short var_21 = (unsigned short)38015;
unsigned short arr_1 [15] ;
unsigned short arr_5 [15] ;
unsigned short arr_2 [15] ;
signed char arr_6 [15] [15] ;
signed char arr_7 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (unsigned short)18939;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (unsigned short)22415;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (unsigned short)50833;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)-20;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = (signed char)-16;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
