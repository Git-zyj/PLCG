#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1237023505;
_Bool var_2 = (_Bool)0;
long long int var_3 = 8600298409143219289LL;
unsigned short var_6 = (unsigned short)54235;
unsigned short var_8 = (unsigned short)12065;
unsigned long long int var_9 = 10015789168821679218ULL;
unsigned int var_10 = 721530477U;
int var_13 = 555909844;
int zero = 0;
unsigned int var_15 = 2329081984U;
unsigned long long int var_16 = 14985388647678831540ULL;
unsigned long long int var_17 = 13759317791728663705ULL;
unsigned short var_18 = (unsigned short)23476;
unsigned long long int var_19 = 16246014510466034911ULL;
int var_20 = 2095916209;
unsigned int var_21 = 3511091684U;
signed char arr_0 [11] ;
unsigned long long int arr_1 [11] [11] ;
unsigned char arr_3 [25] [25] ;
_Bool arr_4 [25] ;
signed char arr_2 [11] ;
_Bool arr_5 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (signed char)-73;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = 5277212247136304419ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)44;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (signed char)-2;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
