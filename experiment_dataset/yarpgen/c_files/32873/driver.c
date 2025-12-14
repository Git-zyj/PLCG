#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-16;
unsigned long long int var_1 = 5590114811937927416ULL;
short var_2 = (short)29436;
signed char var_5 = (signed char)-28;
short var_6 = (short)16342;
unsigned short var_8 = (unsigned short)63911;
signed char var_10 = (signed char)116;
_Bool var_11 = (_Bool)0;
unsigned short var_14 = (unsigned short)35116;
signed char var_15 = (signed char)74;
int zero = 0;
signed char var_16 = (signed char)-97;
short var_17 = (short)15838;
signed char var_18 = (signed char)-31;
unsigned short var_19 = (unsigned short)60973;
signed char var_20 = (signed char)60;
unsigned long long int var_21 = 18021481667346883677ULL;
short var_22 = (short)-25857;
unsigned long long int var_23 = 11355985730675200587ULL;
unsigned long long int arr_0 [18] [18] ;
signed char arr_1 [18] [18] ;
signed char arr_13 [18] ;
unsigned short arr_3 [18] ;
unsigned short arr_4 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = 521649320724462290ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-14;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_13 [i_0] = (signed char)-110;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (unsigned short)26407;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (unsigned short)57193;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
