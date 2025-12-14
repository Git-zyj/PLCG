#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2566471258U;
int var_1 = 1903229206;
int var_2 = 1906995013;
unsigned int var_3 = 1583753025U;
_Bool var_4 = (_Bool)0;
unsigned int var_5 = 2172009605U;
int var_6 = -131864694;
unsigned short var_7 = (unsigned short)15775;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 1885272181U;
unsigned int var_10 = 1755425886U;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 1283694643U;
signed char var_14 = (signed char)43;
unsigned char var_15 = (unsigned char)176;
unsigned short var_16 = (unsigned short)10973;
unsigned int var_17 = 775866218U;
unsigned short var_18 = (unsigned short)60443;
int var_19 = -797336414;
int var_20 = 1673948346;
signed char var_21 = (signed char)46;
unsigned char var_22 = (unsigned char)158;
int var_23 = 308856980;
unsigned short arr_6 [12] ;
unsigned int arr_11 [17] [17] [17] ;
unsigned int arr_25 [15] [15] [15] [15] ;
unsigned int arr_32 [24] ;
signed char arr_33 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = (unsigned short)45353;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = 1112714513U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_25 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 916967817U : 1438430456U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_32 [i_0] = 2881673431U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_33 [i_0] [i_1] = (signed char)126;
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
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    hash(&seed, arr_25 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_32 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_33 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
