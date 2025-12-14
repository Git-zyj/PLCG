#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)190;
int var_2 = -1276499577;
unsigned long long int var_3 = 11845598926759544526ULL;
long long int var_6 = -6139755221564070342LL;
_Bool var_7 = (_Bool)1;
signed char var_8 = (signed char)13;
unsigned int var_10 = 2144509876U;
int zero = 0;
unsigned long long int var_12 = 17890941121275689328ULL;
int var_13 = 353169703;
int var_14 = 724954397;
int var_15 = 1519978572;
unsigned int var_16 = 1166890089U;
unsigned short var_17 = (unsigned short)1233;
unsigned int var_18 = 149897323U;
unsigned short var_19 = (unsigned short)7045;
unsigned short var_20 = (unsigned short)40363;
unsigned char arr_0 [21] ;
short arr_1 [21] [21] ;
unsigned short arr_2 [11] ;
unsigned long long int arr_4 [11] [11] ;
unsigned long long int arr_5 [11] ;
signed char arr_6 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (unsigned char)177;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-28250;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (unsigned short)52050;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = 7753011635537748974ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = 47645057447727236ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-102 : (signed char)-50;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
