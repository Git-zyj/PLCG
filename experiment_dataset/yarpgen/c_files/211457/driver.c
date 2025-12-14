#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13552443845572960829ULL;
unsigned short var_2 = (unsigned short)23737;
unsigned long long int var_3 = 10374863340433074850ULL;
int var_5 = 764356234;
unsigned int var_6 = 262019886U;
unsigned short var_7 = (unsigned short)43021;
short var_8 = (short)-15894;
unsigned short var_9 = (unsigned short)20452;
unsigned short var_12 = (unsigned short)56935;
int zero = 0;
unsigned short var_13 = (unsigned short)63951;
signed char var_14 = (signed char)-103;
unsigned long long int var_15 = 17100061716912186778ULL;
unsigned short var_16 = (unsigned short)18845;
_Bool var_17 = (_Bool)0;
long long int var_18 = -7413442647548625156LL;
short var_19 = (short)25537;
signed char arr_0 [19] ;
short arr_2 [19] ;
unsigned int arr_5 [11] ;
long long int arr_6 [11] ;
unsigned short arr_3 [19] ;
unsigned int arr_4 [19] ;
unsigned short arr_7 [11] [11] ;
signed char arr_8 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (signed char)15;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (short)27234;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 2962137120U : 79290921U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = -5556142085369281728LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (unsigned short)58834;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = 3830828339U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)39957 : (unsigned short)727;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-88 : (signed char)52;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
