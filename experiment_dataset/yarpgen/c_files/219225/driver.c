#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)43747;
signed char var_2 = (signed char)73;
signed char var_3 = (signed char)-36;
unsigned long long int var_4 = 17062955554335726939ULL;
unsigned long long int var_6 = 10880287542355479462ULL;
signed char var_11 = (signed char)49;
signed char var_14 = (signed char)105;
signed char var_15 = (signed char)-58;
unsigned int var_16 = 1893279581U;
_Bool var_17 = (_Bool)0;
int zero = 0;
_Bool var_18 = (_Bool)0;
signed char var_19 = (signed char)-35;
signed char var_20 = (signed char)-122;
unsigned char var_21 = (unsigned char)214;
_Bool var_22 = (_Bool)1;
unsigned long long int var_23 = 3286939172983502836ULL;
unsigned short var_24 = (unsigned short)45815;
signed char var_25 = (signed char)-73;
unsigned char arr_0 [19] [19] ;
unsigned long long int arr_1 [19] ;
short arr_3 [11] ;
int arr_4 [11] ;
signed char arr_6 [11] ;
unsigned long long int arr_7 [11] ;
unsigned int arr_2 [19] ;
short arr_8 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)83;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 12146929563630156248ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (short)-4410;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? -2065538935 : 145477705;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (signed char)-81 : (signed char)56;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = 18382902387903010400ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = 4234597830U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (short)-18521 : (short)-2593;
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
