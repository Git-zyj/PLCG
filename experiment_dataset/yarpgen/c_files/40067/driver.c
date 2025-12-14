#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 449089710U;
signed char var_1 = (signed char)81;
unsigned short var_5 = (unsigned short)17347;
signed char var_8 = (signed char)11;
signed char var_10 = (signed char)2;
_Bool var_11 = (_Bool)1;
signed char var_13 = (signed char)88;
unsigned int var_16 = 2823957930U;
unsigned int var_17 = 990388404U;
int var_18 = 935067967;
int zero = 0;
unsigned short var_20 = (unsigned short)52081;
_Bool var_21 = (_Bool)0;
unsigned int var_22 = 4143143758U;
short var_23 = (short)-13381;
signed char var_24 = (signed char)-53;
long long int var_25 = 6469000700429306285LL;
unsigned short var_26 = (unsigned short)2402;
short var_27 = (short)8803;
unsigned char var_28 = (unsigned char)254;
unsigned int var_29 = 2131149901U;
unsigned int var_30 = 3269656754U;
unsigned short var_31 = (unsigned short)385;
unsigned char arr_2 [17] ;
short arr_7 [17] [17] [17] ;
unsigned long long int arr_5 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (unsigned char)204;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (short)7029;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = 10044935135056588347ULL;
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
