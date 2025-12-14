#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_2 = (unsigned char)1;
unsigned short var_4 = (unsigned short)50625;
unsigned long long int var_5 = 14629250393083569764ULL;
long long int var_6 = -4013970350509894336LL;
short var_8 = (short)-10187;
int var_11 = 943550078;
int zero = 0;
unsigned long long int var_13 = 9973816067638795510ULL;
unsigned int var_14 = 1227213935U;
unsigned long long int var_15 = 6702307371557421416ULL;
signed char var_16 = (signed char)-116;
unsigned char var_17 = (unsigned char)71;
long long int var_18 = -1169597109844074183LL;
signed char arr_0 [24] ;
unsigned int arr_3 [24] [24] ;
signed char arr_4 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (signed char)-68;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = 3451575029U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)-62;
}

void checksum() {
    hash(&seed, var_13);
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
