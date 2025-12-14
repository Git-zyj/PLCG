#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6233657932311699815LL;
unsigned short var_1 = (unsigned short)58688;
_Bool var_2 = (_Bool)0;
unsigned char var_6 = (unsigned char)20;
_Bool var_7 = (_Bool)0;
int var_9 = 2098220033;
int var_10 = 3409869;
unsigned short var_11 = (unsigned short)37475;
int zero = 0;
int var_13 = -1677291053;
long long int var_14 = -385875422148889328LL;
_Bool var_15 = (_Bool)0;
long long int var_16 = -6659070577452965584LL;
int var_17 = 2040861265;
int var_18 = -545503656;
unsigned long long int var_19 = 14672115642912807084ULL;
signed char var_20 = (signed char)56;
_Bool var_21 = (_Bool)1;
_Bool var_22 = (_Bool)1;
unsigned char var_23 = (unsigned char)113;
signed char var_24 = (signed char)-98;
_Bool var_25 = (_Bool)0;
int arr_2 [21] [21] ;
signed char arr_4 [21] ;
short arr_15 [22] ;
unsigned int arr_16 [22] ;
unsigned short arr_19 [18] ;
unsigned long long int arr_14 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = 1705364867;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (signed char)25;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_15 [i_0] = (short)4236;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_16 [i_0] = 1926355281U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_19 [i_0] = (unsigned short)56038;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_14 [i_0] = 1802393256707384124ULL;
}

void checksum() {
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
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
