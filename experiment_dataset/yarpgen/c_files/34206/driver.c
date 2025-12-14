#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-59;
unsigned short var_3 = (unsigned short)2116;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)1;
short var_6 = (short)-9615;
signed char var_8 = (signed char)82;
signed char var_9 = (signed char)-78;
_Bool var_10 = (_Bool)1;
unsigned char var_11 = (unsigned char)81;
int var_15 = -1933795150;
int zero = 0;
unsigned long long int var_16 = 11037298878722880168ULL;
short var_17 = (short)22566;
short var_18 = (short)19830;
signed char var_19 = (signed char)-16;
unsigned long long int arr_0 [25] ;
signed char arr_1 [25] [25] ;
short arr_2 [25] [25] ;
long long int arr_3 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 3401470693751460914ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-118;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = (short)20607;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = -1386818420274657176LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
