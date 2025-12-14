#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3833236358U;
unsigned int var_4 = 1972767349U;
unsigned int var_7 = 2024113643U;
unsigned short var_8 = (unsigned short)55333;
_Bool var_9 = (_Bool)0;
short var_10 = (short)26699;
unsigned char var_12 = (unsigned char)37;
signed char var_13 = (signed char)-25;
long long int var_14 = -243331153479898597LL;
int zero = 0;
unsigned int var_17 = 200502101U;
int var_18 = -827433856;
unsigned short var_19 = (unsigned short)7545;
int var_20 = -1343793977;
short var_21 = (short)24704;
long long int var_22 = -5034435174571939681LL;
unsigned long long int var_23 = 12008631898822087184ULL;
unsigned char var_24 = (unsigned char)172;
int var_25 = -963518979;
short arr_0 [12] [12] ;
int arr_1 [12] [12] ;
short arr_6 [10] ;
int arr_8 [10] [10] [10] ;
unsigned int arr_2 [12] ;
short arr_3 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = (short)5441;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = 1871348995;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = (short)-4087;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 2106472823;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 748976126U : 216683921U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)22342 : (short)21250;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
