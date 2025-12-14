#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9922567787390779025ULL;
unsigned char var_1 = (unsigned char)35;
int var_5 = 484619389;
long long int var_6 = -6804602423505704986LL;
_Bool var_8 = (_Bool)0;
short var_9 = (short)-9636;
int zero = 0;
short var_10 = (short)-2805;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 4190751272U;
unsigned short var_13 = (unsigned short)337;
long long int var_14 = 8561842652410458775LL;
short var_15 = (short)-10269;
short var_16 = (short)13042;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)106;
long long int var_19 = 2417807907281968553LL;
signed char var_20 = (signed char)-26;
unsigned char var_21 = (unsigned char)108;
_Bool var_22 = (_Bool)1;
unsigned int var_23 = 3984842992U;
unsigned short var_24 = (unsigned short)7660;
unsigned short arr_0 [17] ;
unsigned short arr_1 [17] ;
short arr_2 [17] ;
int arr_3 [17] ;
_Bool arr_4 [17] [17] [17] ;
unsigned char arr_6 [17] [17] ;
unsigned int arr_7 [17] ;
unsigned int arr_10 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (unsigned short)6233;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (unsigned short)62785;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (short)-28219;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = -558258378;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)158;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = 3791464724U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_10 [i_0] = 1857353171U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
