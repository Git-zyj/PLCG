#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -5331998520168892053LL;
unsigned short var_5 = (unsigned short)63841;
int var_8 = -164845301;
unsigned int var_12 = 1427554249U;
int zero = 0;
unsigned long long int var_13 = 8881964536418737557ULL;
short var_14 = (short)-21394;
unsigned long long int var_15 = 5346060502686414642ULL;
unsigned short var_16 = (unsigned short)55233;
int var_17 = 362803339;
unsigned int var_18 = 3017263571U;
signed char var_19 = (signed char)115;
long long int var_20 = -7845985738110045481LL;
long long int var_21 = -4283421856980367117LL;
signed char var_22 = (signed char)110;
long long int var_23 = -5788771224304849683LL;
signed char var_24 = (signed char)35;
long long int var_25 = -4409423959133894425LL;
unsigned int arr_0 [12] ;
unsigned int arr_1 [12] [12] ;
unsigned long long int arr_3 [14] ;
unsigned short arr_4 [14] ;
short arr_8 [14] ;
int arr_12 [16] ;
unsigned short arr_13 [16] ;
unsigned short arr_2 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 2800359668U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = 3729466050U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = 6652397367407127064ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (unsigned short)1844;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = (short)17058;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_12 [i_0] = -1838212010;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_13 [i_0] = (unsigned short)13533;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)35142 : (unsigned short)8615;
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
