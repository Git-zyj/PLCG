#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16792991120302169258ULL;
signed char var_2 = (signed char)49;
int var_4 = -1972618105;
unsigned long long int var_6 = 5302504879312534483ULL;
long long int var_7 = 4359715923682994657LL;
unsigned char var_8 = (unsigned char)124;
unsigned long long int var_9 = 7660497016282696445ULL;
short var_10 = (short)25941;
signed char var_11 = (signed char)-101;
unsigned int var_12 = 683815443U;
unsigned short var_13 = (unsigned short)23648;
unsigned long long int var_14 = 17397107476227948704ULL;
int zero = 0;
unsigned char var_15 = (unsigned char)80;
short var_16 = (short)10270;
unsigned long long int var_17 = 7314834949804618725ULL;
unsigned short var_18 = (unsigned short)60202;
unsigned long long int var_19 = 4962315948613065899ULL;
unsigned char var_20 = (unsigned char)41;
unsigned char var_21 = (unsigned char)93;
short arr_0 [20] ;
short arr_1 [20] ;
int arr_4 [24] ;
unsigned long long int arr_6 [24] [24] ;
int arr_2 [20] ;
int arr_3 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (short)-17143 : (short)-5013;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (short)-27767;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = -70701079;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_6 [i_0] [i_1] = 2060839963350071234ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? -116105097 : 1686123556;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? -1805760773 : 582465879;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
