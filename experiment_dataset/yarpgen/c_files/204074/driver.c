#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 910819158645956946ULL;
short var_4 = (short)-26321;
unsigned char var_5 = (unsigned char)14;
int var_6 = 713663053;
signed char var_8 = (signed char)-72;
unsigned long long int var_10 = 14184516002980702782ULL;
unsigned int var_11 = 1369935514U;
short var_12 = (short)31640;
int zero = 0;
short var_14 = (short)20413;
signed char var_15 = (signed char)-121;
unsigned char var_16 = (unsigned char)163;
unsigned char var_17 = (unsigned char)80;
unsigned char var_18 = (unsigned char)107;
unsigned int var_19 = 4284882278U;
short var_20 = (short)-10500;
unsigned long long int var_21 = 3619646911620390741ULL;
short var_22 = (short)-23955;
int var_23 = 264039735;
unsigned long long int var_24 = 18426283939155172374ULL;
unsigned int var_25 = 2159783309U;
signed char var_26 = (signed char)-90;
_Bool arr_0 [23] ;
short arr_1 [23] [23] ;
unsigned char arr_2 [23] ;
unsigned int arr_3 [23] [23] [23] ;
signed char arr_4 [23] [23] [23] ;
unsigned char arr_6 [22] [22] ;
short arr_8 [22] ;
signed char arr_9 [22] [22] [22] ;
unsigned int arr_12 [17] ;
int arr_21 [17] [17] ;
int arr_23 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-23937;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (unsigned char)30;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 2204695330U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (signed char)116;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)204;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = (short)24552;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (signed char)-29;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_12 [i_0] = 3124144760U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_21 [i_0] [i_1] = -138643423;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = 1852231081;
}

void checksum() {
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
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
