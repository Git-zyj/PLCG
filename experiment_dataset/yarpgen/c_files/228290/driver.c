#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5319528329850012644LL;
short var_1 = (short)-20670;
long long int var_2 = -2165960711107649894LL;
unsigned int var_3 = 3857353312U;
long long int var_4 = 5235240010181271383LL;
long long int var_6 = -8050882646902657299LL;
long long int var_7 = 4213769032833669349LL;
signed char var_8 = (signed char)-69;
long long int var_10 = -1725535974441906907LL;
unsigned short var_12 = (unsigned short)37688;
unsigned int var_14 = 1350804902U;
int zero = 0;
unsigned long long int var_15 = 12629841339055272809ULL;
unsigned short var_16 = (unsigned short)54447;
signed char var_17 = (signed char)94;
unsigned long long int var_18 = 9054268836461228339ULL;
unsigned char var_19 = (unsigned char)5;
signed char arr_5 [19] ;
unsigned short arr_6 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (signed char)-97;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)56450;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
