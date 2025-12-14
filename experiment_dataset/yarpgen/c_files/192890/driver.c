#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)93;
int var_2 = -2100658344;
signed char var_3 = (signed char)122;
int var_5 = 2132353531;
signed char var_7 = (signed char)-31;
int var_8 = -451324473;
signed char var_12 = (signed char)-116;
int var_17 = 987965282;
int zero = 0;
int var_18 = -1624339368;
signed char var_19 = (signed char)-64;
signed char var_20 = (signed char)-114;
signed char var_21 = (signed char)-4;
signed char arr_0 [16] [16] ;
short arr_4 [19] ;
short arr_2 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-127 : (signed char)-1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (short)30147;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (short)10415 : (short)1529;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
