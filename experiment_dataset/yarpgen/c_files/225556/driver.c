#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-520;
long long int var_2 = -6633641131278847023LL;
unsigned int var_3 = 1889538140U;
int var_6 = -2144597306;
short var_7 = (short)9868;
unsigned char var_8 = (unsigned char)90;
int var_11 = -1761785572;
unsigned long long int var_13 = 11255147674094811376ULL;
unsigned short var_15 = (unsigned short)64839;
int zero = 0;
unsigned int var_16 = 1398912224U;
unsigned int var_17 = 2393103210U;
unsigned long long int var_18 = 14433986630341768006ULL;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)-86;
int var_21 = -34028962;
unsigned short var_22 = (unsigned short)43950;
unsigned int arr_0 [25] ;
unsigned long long int arr_2 [25] [25] ;
long long int arr_3 [25] ;
unsigned short arr_5 [20] [20] ;
int arr_4 [25] ;
unsigned char arr_8 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 909435155U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = 7024317034965429987ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 3581381234815344307LL : 4653532602765267938LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)52375;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 776094256 : -1973882055;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = (unsigned char)73;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
