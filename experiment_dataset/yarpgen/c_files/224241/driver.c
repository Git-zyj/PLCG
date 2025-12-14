#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 1484976642062357070ULL;
long long int var_5 = -2001589804681828212LL;
long long int var_7 = -8253443211654705195LL;
long long int var_9 = 4179713854407879280LL;
signed char var_11 = (signed char)-75;
signed char var_12 = (signed char)4;
long long int var_13 = -5665283875158408467LL;
unsigned char var_14 = (unsigned char)64;
int zero = 0;
signed char var_15 = (signed char)-44;
short var_16 = (short)-4467;
short var_17 = (short)19746;
unsigned int var_18 = 205865428U;
signed char var_19 = (signed char)-49;
short arr_0 [25] [25] ;
unsigned int arr_2 [25] ;
unsigned long long int arr_3 [25] [25] [25] ;
short arr_4 [25] ;
unsigned long long int arr_5 [25] ;
unsigned char arr_6 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (short)2688;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = 215959010U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 3432138734345172514ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (short)13883;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 9800256931495884639ULL : 17838976921580496217ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned char)132 : (unsigned char)42;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
