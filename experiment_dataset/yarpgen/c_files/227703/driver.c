#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13484916772153000578ULL;
unsigned long long int var_7 = 7473344784713015555ULL;
unsigned long long int var_8 = 9342324088544345259ULL;
_Bool var_10 = (_Bool)1;
short var_11 = (short)28172;
short var_13 = (short)160;
short var_16 = (short)-23679;
int zero = 0;
unsigned long long int var_19 = 17485259700605060861ULL;
short var_20 = (short)8980;
short var_21 = (short)-9158;
unsigned long long int var_22 = 10651144511250390329ULL;
unsigned long long int var_23 = 14712331802960198746ULL;
unsigned long long int arr_1 [18] ;
unsigned long long int arr_2 [18] ;
unsigned long long int arr_4 [18] ;
_Bool arr_5 [18] [18] [18] ;
short arr_6 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 16917644314881121440ULL : 7377026203218523238ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 2399163291606349280ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = 3499353757339969050ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (short)27211 : (short)-10432;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
