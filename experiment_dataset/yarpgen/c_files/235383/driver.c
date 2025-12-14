#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 415979703U;
int var_2 = -1701885864;
unsigned short var_3 = (unsigned short)26796;
unsigned char var_4 = (unsigned char)6;
unsigned char var_5 = (unsigned char)142;
int var_6 = -774213678;
short var_7 = (short)25438;
signed char var_9 = (signed char)-77;
long long int var_10 = 9220612441249006895LL;
unsigned short var_12 = (unsigned short)16428;
int var_13 = 770420198;
signed char var_14 = (signed char)37;
int zero = 0;
signed char var_15 = (signed char)42;
int var_16 = 325765662;
int var_17 = 1976152406;
unsigned long long int var_18 = 7108705601802370927ULL;
short var_19 = (short)24723;
int var_20 = -796937003;
short var_21 = (short)-24033;
unsigned long long int var_22 = 2727394756092839827ULL;
int arr_1 [21] [21] ;
long long int arr_3 [21] [21] ;
unsigned long long int arr_4 [21] ;
long long int arr_8 [11] ;
unsigned long long int arr_9 [11] ;
short arr_6 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = 1191538720;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = 440328387482292243LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = 3348576556353915354ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_8 [i_0] = 5144392626251949544LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_9 [i_0] = 13546628569156925589ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (short)-32239;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
