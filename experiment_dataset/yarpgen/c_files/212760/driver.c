#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-32431;
_Bool var_4 = (_Bool)1;
unsigned char var_5 = (unsigned char)102;
unsigned long long int var_6 = 11900196236530357668ULL;
unsigned int var_9 = 4238999271U;
signed char var_15 = (signed char)81;
unsigned char var_16 = (unsigned char)104;
int zero = 0;
unsigned char var_20 = (unsigned char)213;
signed char var_21 = (signed char)118;
unsigned short var_22 = (unsigned short)43223;
int var_23 = 1803614596;
_Bool var_24 = (_Bool)0;
_Bool var_25 = (_Bool)1;
unsigned char var_26 = (unsigned char)72;
unsigned int var_27 = 826171849U;
unsigned long long int var_28 = 10614619347467788204ULL;
long long int var_29 = -2873204817997856119LL;
signed char var_30 = (signed char)122;
long long int var_31 = -9057117388847495667LL;
long long int var_32 = 6560868329124588247LL;
short var_33 = (short)27267;
signed char arr_0 [25] ;
unsigned short arr_3 [25] [25] ;
unsigned int arr_4 [25] [25] ;
signed char arr_5 [25] [25] [25] ;
long long int arr_8 [25] [25] [25] ;
short arr_9 [25] [25] ;
_Bool arr_12 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (signed char)-91 : (signed char)64;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)57184;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = 3843836403U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)-113 : (signed char)-26;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 1235778742139216368LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_9 [i_0] [i_1] = (short)7069;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_12 [i_0] [i_1] = (_Bool)0;
}

void checksum() {
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
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
