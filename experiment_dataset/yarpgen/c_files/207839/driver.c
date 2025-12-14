#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)30119;
signed char var_8 = (signed char)-18;
short var_11 = (short)11824;
short var_13 = (short)-29226;
unsigned long long int var_15 = 1002361713746671258ULL;
int zero = 0;
int var_18 = 268937302;
signed char var_19 = (signed char)104;
unsigned long long int var_20 = 7289711315687514734ULL;
unsigned long long int var_21 = 3483042106708273609ULL;
short var_22 = (short)22208;
_Bool var_23 = (_Bool)1;
unsigned char var_24 = (unsigned char)48;
unsigned char var_25 = (unsigned char)30;
unsigned long long int var_26 = 9498257964551870032ULL;
unsigned long long int var_27 = 2155021741977933020ULL;
_Bool var_28 = (_Bool)1;
signed char var_29 = (signed char)58;
unsigned char arr_10 [20] [20] ;
short arr_12 [20] ;
signed char arr_4 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned char)34;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_12 [i_0] = (short)-3238;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)62;
}

void checksum() {
    hash(&seed, var_18);
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
