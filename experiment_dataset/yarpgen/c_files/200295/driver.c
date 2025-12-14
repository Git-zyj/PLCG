#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6206620260950105689LL;
unsigned long long int var_2 = 5435259465240733338ULL;
signed char var_3 = (signed char)-37;
long long int var_6 = -2794227890228176896LL;
long long int var_9 = -3691165207761763350LL;
unsigned short var_10 = (unsigned short)49408;
int var_11 = -1226376495;
unsigned long long int var_14 = 1135140041210480152ULL;
int zero = 0;
signed char var_17 = (signed char)68;
unsigned char var_18 = (unsigned char)165;
long long int var_19 = -4389641348819173631LL;
unsigned char var_20 = (unsigned char)59;
unsigned int var_21 = 1181747251U;
int var_22 = -2095595936;
_Bool var_23 = (_Bool)1;
unsigned long long int var_24 = 3306946720290248365ULL;
unsigned long long int var_25 = 6121849426059828647ULL;
unsigned char var_26 = (unsigned char)213;
signed char arr_0 [17] ;
unsigned char arr_1 [17] [17] ;
unsigned long long int arr_2 [17] ;
signed char arr_3 [17] [17] ;
signed char arr_5 [17] [17] [17] ;
signed char arr_7 [25] ;
unsigned char arr_12 [25] ;
unsigned short arr_16 [25] ;
short arr_6 [17] [17] ;
short arr_9 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (signed char)107;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)21;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = 12794759172256374618ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)69;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (signed char)-95;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = (signed char)-70;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_12 [i_0] = (unsigned char)213;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? (unsigned short)31922 : (unsigned short)8933;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_6 [i_0] [i_1] = (short)6325;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_9 [i_0] = (short)4052;
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
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
