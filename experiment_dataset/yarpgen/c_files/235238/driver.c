#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-26558;
long long int var_1 = -3195528057941933286LL;
unsigned int var_2 = 2489954393U;
unsigned short var_3 = (unsigned short)61450;
unsigned short var_5 = (unsigned short)60774;
unsigned long long int var_6 = 8770491514193300013ULL;
_Bool var_7 = (_Bool)0;
unsigned short var_8 = (unsigned short)49922;
int var_9 = -2006063258;
unsigned int var_10 = 1921136228U;
signed char var_14 = (signed char)88;
long long int var_15 = -2893223812956629365LL;
int zero = 0;
unsigned char var_16 = (unsigned char)144;
unsigned int var_17 = 139141537U;
unsigned char var_18 = (unsigned char)109;
signed char var_19 = (signed char)97;
unsigned int var_20 = 2002428703U;
unsigned short var_21 = (unsigned short)16066;
int var_22 = -552005507;
signed char var_23 = (signed char)-48;
int arr_0 [13] ;
unsigned long long int arr_2 [13] ;
unsigned short arr_3 [13] ;
_Bool arr_6 [22] [22] ;
long long int arr_7 [22] ;
short arr_9 [22] [22] ;
int arr_11 [22] [22] [22] ;
short arr_4 [13] ;
unsigned long long int arr_5 [13] [13] ;
int arr_8 [22] ;
unsigned char arr_13 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 2055663143;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = 1705929889214942122ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (unsigned short)38375;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = -3143499433374616328LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_9 [i_0] [i_1] = (short)-16053;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = -268213436;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (short)11154;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = 18380983726739101105ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = -2106776405;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_13 [i_0] = (unsigned char)50;
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
