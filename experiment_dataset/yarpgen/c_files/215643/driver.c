#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4371029830994317821LL;
signed char var_2 = (signed char)42;
unsigned long long int var_3 = 277356193218581698ULL;
signed char var_4 = (signed char)108;
int var_6 = -1895821428;
unsigned int var_7 = 3616409244U;
signed char var_9 = (signed char)61;
int var_11 = 289643955;
unsigned long long int var_13 = 2156069227684905823ULL;
_Bool var_15 = (_Bool)1;
int zero = 0;
signed char var_16 = (signed char)2;
signed char var_17 = (signed char)-37;
unsigned long long int var_18 = 2703544136170176474ULL;
unsigned long long int var_19 = 7255588771749330506ULL;
unsigned int var_20 = 3720016016U;
_Bool var_21 = (_Bool)0;
signed char arr_0 [22] ;
unsigned long long int arr_7 [17] ;
signed char arr_2 [22] ;
unsigned short arr_3 [22] ;
int arr_9 [17] ;
unsigned char arr_10 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (signed char)91;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = 6232640955205715715ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (signed char)71;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (unsigned short)1676;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_9 [i_0] = 729744376;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_10 [i_0] = (unsigned char)65;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
