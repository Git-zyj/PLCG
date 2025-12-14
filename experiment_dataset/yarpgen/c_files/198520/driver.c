#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5122253755071242560LL;
_Bool var_2 = (_Bool)1;
unsigned int var_3 = 3261038926U;
signed char var_4 = (signed char)-46;
_Bool var_6 = (_Bool)0;
unsigned int var_7 = 3762024279U;
unsigned short var_11 = (unsigned short)12503;
int zero = 0;
unsigned short var_14 = (unsigned short)54746;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 4175740894U;
unsigned char var_17 = (unsigned char)77;
unsigned long long int var_18 = 981323544111208204ULL;
int var_19 = 806151387;
short var_20 = (short)6441;
unsigned int arr_0 [16] ;
long long int arr_1 [16] ;
unsigned short arr_3 [16] [16] ;
int arr_8 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 3281000877U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 3567585429814779267LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)41125;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = -1120598425;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
