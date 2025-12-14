#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5417124152560666408ULL;
unsigned char var_2 = (unsigned char)82;
int var_6 = -591364612;
short var_10 = (short)25934;
unsigned char var_12 = (unsigned char)22;
long long int var_16 = -7433816643570675633LL;
unsigned char var_17 = (unsigned char)243;
long long int var_18 = -4424331017424170257LL;
_Bool var_19 = (_Bool)1;
int zero = 0;
unsigned long long int var_20 = 8930837149923961485ULL;
short var_21 = (short)27526;
unsigned char var_22 = (unsigned char)198;
short var_23 = (short)7159;
unsigned char var_24 = (unsigned char)31;
unsigned char var_25 = (unsigned char)203;
signed char var_26 = (signed char)15;
short var_27 = (short)4941;
unsigned long long int var_28 = 5672904062588578553ULL;
int var_29 = -1511469105;
_Bool var_30 = (_Bool)1;
int var_31 = 2056422945;
_Bool arr_2 [23] ;
unsigned int arr_6 [23] [23] ;
unsigned int arr_7 [23] [23] [23] [23] ;
int arr_8 [23] [23] [23] ;
long long int arr_12 [23] [23] [23] [23] [23] [23] ;
short arr_14 [23] [23] ;
long long int arr_20 [22] ;
signed char arr_21 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_6 [i_0] [i_1] = 472538342U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 3026633300U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = -2116106454;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -2405457355793637779LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_14 [i_0] [i_1] = (short)-15223;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_20 [i_0] = 3811137816080065215LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_21 [i_0] [i_1] = (signed char)-120;
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
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
