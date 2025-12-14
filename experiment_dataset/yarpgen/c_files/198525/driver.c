#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 7518974517606543372LL;
signed char var_3 = (signed char)-4;
unsigned short var_5 = (unsigned short)14719;
long long int var_8 = -8616294303681267500LL;
unsigned int var_10 = 4237885465U;
long long int var_11 = 6440304901973673474LL;
signed char var_12 = (signed char)14;
int var_17 = -654721575;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned char var_19 = (unsigned char)75;
unsigned char var_20 = (unsigned char)56;
_Bool var_21 = (_Bool)0;
signed char var_22 = (signed char)-103;
unsigned long long int var_23 = 15689814046624247712ULL;
long long int var_24 = -2052737441192559728LL;
long long int var_25 = 3430064512883810923LL;
unsigned char arr_0 [19] [19] ;
unsigned short arr_1 [19] ;
unsigned short arr_6 [18] ;
unsigned char arr_3 [19] ;
long long int arr_8 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)247 : (unsigned char)40;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned short)26889 : (unsigned short)9821;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = (unsigned short)8340;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned char)195 : (unsigned char)156;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_8 [i_0] = -7080387564160960423LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
