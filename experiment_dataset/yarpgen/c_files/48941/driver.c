#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1367122596;
int var_1 = -329427629;
short var_2 = (short)5539;
signed char var_3 = (signed char)83;
unsigned short var_4 = (unsigned short)27670;
signed char var_5 = (signed char)-108;
unsigned char var_6 = (unsigned char)104;
_Bool var_7 = (_Bool)0;
unsigned char var_8 = (unsigned char)26;
long long int var_9 = -4587571349994970966LL;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)33587;
int zero = 0;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)5;
long long int var_18 = 5483455201802750389LL;
unsigned long long int var_19 = 129281935274295326ULL;
long long int var_20 = 6958851494812006004LL;
int var_21 = -2006341764;
_Bool var_22 = (_Bool)1;
long long int var_23 = 1932734270601220306LL;
short var_24 = (short)-20604;
long long int var_25 = 360776893381269994LL;
unsigned short var_26 = (unsigned short)46232;
unsigned long long int var_27 = 447357647976660237ULL;
int arr_15 [23] [23] [23] ;
signed char arr_21 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 1693446226 : 2001688037;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)28 : (signed char)35;
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
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_15 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_21 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
