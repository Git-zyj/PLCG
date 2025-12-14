#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8418958272102938694ULL;
long long int var_2 = -7129988148681136802LL;
_Bool var_3 = (_Bool)0;
unsigned int var_5 = 2348470705U;
int var_12 = -622327378;
unsigned long long int var_13 = 11743392299874709376ULL;
unsigned short var_15 = (unsigned short)59393;
unsigned short var_17 = (unsigned short)19846;
int zero = 0;
unsigned short var_18 = (unsigned short)44889;
unsigned short var_19 = (unsigned short)42940;
long long int var_20 = -6326999153364414068LL;
unsigned int var_21 = 2741046148U;
long long int var_22 = -2454064353125284759LL;
unsigned long long int arr_0 [14] ;
long long int arr_5 [14] [14] ;
long long int arr_3 [14] ;
long long int arr_6 [14] [14] ;
unsigned long long int arr_10 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 5838841531733885302ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = -7081504636621833123LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = 389484159911184195LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_6 [i_0] [i_1] = 1324561194003620203LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_10 [i_0] [i_1] = (i_1 % 2 == 0) ? 18210393606608480973ULL : 10429694673910785297ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
