#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14524004860734163935ULL;
unsigned char var_1 = (unsigned char)181;
signed char var_4 = (signed char)-28;
long long int var_6 = 854785787474462343LL;
short var_7 = (short)-24782;
unsigned short var_8 = (unsigned short)64670;
unsigned short var_10 = (unsigned short)61225;
unsigned char var_12 = (unsigned char)120;
unsigned long long int var_13 = 11916158004209622017ULL;
unsigned long long int var_14 = 15364876022291068633ULL;
int zero = 0;
unsigned int var_15 = 3860596359U;
short var_16 = (short)-5990;
int var_17 = 683936228;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)0;
signed char arr_0 [13] ;
unsigned long long int arr_1 [13] [13] ;
_Bool arr_2 [13] [13] [13] ;
unsigned int arr_3 [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (signed char)115;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = 13940770227569279932ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 3836421976U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
