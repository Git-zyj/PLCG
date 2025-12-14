#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)1507;
unsigned long long int var_5 = 17352735473151228526ULL;
signed char var_8 = (signed char)81;
int var_9 = -795908218;
int var_11 = 910763253;
signed char var_13 = (signed char)-80;
int zero = 0;
unsigned int var_14 = 2797148432U;
unsigned char var_15 = (unsigned char)73;
unsigned short var_16 = (unsigned short)50680;
signed char var_17 = (signed char)-121;
signed char var_18 = (signed char)-20;
unsigned int arr_1 [13] [13] ;
unsigned int arr_2 [13] ;
unsigned char arr_3 [13] [13] ;
unsigned char arr_4 [13] [13] ;
unsigned long long int arr_5 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? 3418612499U : 3723933261U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 3447653851U : 3190101726U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)100;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)231;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 16634559111296697633ULL : 6493723069016936084ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
