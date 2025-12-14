#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)48991;
unsigned short var_10 = (unsigned short)52087;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 12686536607903437761ULL;
signed char var_16 = (signed char)-99;
int zero = 0;
signed char var_17 = (signed char)-17;
unsigned short var_18 = (unsigned short)6771;
_Bool var_19 = (_Bool)0;
short var_20 = (short)17057;
long long int var_21 = 3410816267892621851LL;
int var_22 = -389607705;
int var_23 = -1792963975;
unsigned long long int arr_4 [15] ;
unsigned int arr_5 [15] [15] [15] ;
unsigned long long int arr_7 [15] [15] [15] ;
long long int arr_10 [15] ;
long long int arr_12 [15] [15] [15] [15] ;
unsigned short arr_13 [16] ;
long long int arr_14 [16] ;
unsigned short arr_15 [16] [16] ;
unsigned int arr_16 [16] ;
unsigned int arr_17 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = 5903066435066413680ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 2106611100U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 471768030513429240ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_10 [i_0] = -4375953522055000787LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = 5913587128237749291LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_13 [i_0] = (unsigned short)39052;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_14 [i_0] = -6197855006432485312LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_15 [i_0] [i_1] = (unsigned short)11236;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_16 [i_0] = 413843523U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_17 [i_0] = 447823222U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
