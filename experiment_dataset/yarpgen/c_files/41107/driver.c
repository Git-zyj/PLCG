#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-23488;
_Bool var_5 = (_Bool)1;
unsigned long long int var_6 = 9733577270938152975ULL;
unsigned int var_9 = 1667330539U;
short var_11 = (short)-15235;
unsigned char var_13 = (unsigned char)27;
unsigned char var_14 = (unsigned char)96;
unsigned long long int var_15 = 817994290080986734ULL;
unsigned int var_16 = 1221066342U;
int var_17 = 152248426;
unsigned int var_18 = 3199284014U;
short var_19 = (short)-11417;
int zero = 0;
int var_20 = 2079205815;
unsigned char var_21 = (unsigned char)189;
unsigned long long int var_22 = 5893866489550780479ULL;
long long int var_23 = 6610063462217092605LL;
signed char var_24 = (signed char)21;
_Bool var_25 = (_Bool)1;
unsigned int var_26 = 1813328407U;
unsigned short var_27 = (unsigned short)33160;
unsigned long long int var_28 = 10891615702415015487ULL;
unsigned short arr_12 [25] [25] [25] ;
unsigned int arr_16 [11] ;
unsigned char arr_24 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)12674 : (unsigned short)9996;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_16 [i_0] = 96633739U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = (unsigned char)64;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_12 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_24 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
