#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3418072438617109657LL;
long long int var_3 = 957706410143685301LL;
unsigned int var_4 = 2566366769U;
signed char var_5 = (signed char)-22;
int var_6 = -124820537;
unsigned short var_8 = (unsigned short)64494;
unsigned short var_11 = (unsigned short)56691;
long long int var_13 = -1545801520412624006LL;
long long int var_15 = -4359541008661383522LL;
signed char var_16 = (signed char)88;
unsigned short var_17 = (unsigned short)41861;
int zero = 0;
unsigned char var_19 = (unsigned char)158;
int var_20 = -360532100;
long long int var_21 = -5780949440675341921LL;
_Bool var_22 = (_Bool)0;
int var_23 = 1396787614;
long long int var_24 = -3688795012660476201LL;
unsigned short var_25 = (unsigned short)9723;
long long int var_26 = 3236726066756202443LL;
unsigned int var_27 = 1259739632U;
signed char var_28 = (signed char)-25;
unsigned short var_29 = (unsigned short)41006;
int var_30 = 124176336;
signed char var_31 = (signed char)39;
signed char var_32 = (signed char)-68;
short var_33 = (short)-32079;
signed char arr_0 [25] ;
unsigned char arr_2 [25] [25] ;
unsigned short arr_3 [25] ;
short arr_4 [25] ;
unsigned short arr_8 [25] [25] [25] ;
unsigned char arr_16 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (signed char)-121;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)64 : (unsigned char)133;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned short)33689 : (unsigned short)35041;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (short)774;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)21082 : (unsigned short)37907;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)218 : (unsigned char)9;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_16 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
