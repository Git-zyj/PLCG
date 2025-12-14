#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1706813598;
long long int var_2 = 327305530568174050LL;
short var_3 = (short)2757;
_Bool var_5 = (_Bool)0;
int var_6 = 818640737;
long long int var_7 = -3275248584374378193LL;
short var_9 = (short)-13086;
unsigned char var_10 = (unsigned char)60;
unsigned long long int var_11 = 10336590105172703630ULL;
short var_13 = (short)-15021;
unsigned int var_14 = 1649262894U;
short var_15 = (short)-14952;
unsigned long long int var_16 = 14133221333832496232ULL;
int zero = 0;
int var_17 = -453330646;
unsigned int var_18 = 446092453U;
unsigned char var_19 = (unsigned char)191;
unsigned char var_20 = (unsigned char)66;
unsigned short var_21 = (unsigned short)57755;
unsigned char var_22 = (unsigned char)41;
unsigned short var_23 = (unsigned short)61286;
unsigned long long int var_24 = 15154465505397457306ULL;
unsigned short var_25 = (unsigned short)48204;
unsigned long long int arr_1 [21] ;
int arr_2 [21] ;
int arr_5 [23] ;
unsigned int arr_6 [23] ;
signed char arr_3 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 1790398034709109103ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 2052537875;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = 2032982414;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = 3243637789U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)-36;
}

void checksum() {
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
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
