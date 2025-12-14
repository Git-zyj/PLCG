#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)230;
unsigned char var_1 = (unsigned char)244;
long long int var_2 = -3059186889333272404LL;
unsigned long long int var_3 = 14822014993802323102ULL;
int var_5 = -1961497261;
long long int var_6 = -5920020121960043292LL;
signed char var_7 = (signed char)-57;
signed char var_10 = (signed char)24;
int var_11 = 448302623;
int var_12 = -1334330315;
signed char var_13 = (signed char)6;
int zero = 0;
unsigned long long int var_14 = 17896921737137989473ULL;
_Bool var_15 = (_Bool)0;
long long int var_16 = 6306177376807971745LL;
unsigned short var_17 = (unsigned short)6385;
signed char var_18 = (signed char)-20;
long long int var_19 = -108624667433733903LL;
unsigned char var_20 = (unsigned char)180;
unsigned char arr_1 [23] [23] ;
signed char arr_2 [23] [23] ;
long long int arr_3 [23] [23] [23] ;
short arr_4 [23] [23] ;
signed char arr_5 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)171;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)-26;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 6355487885059795815LL : 8241633566203090701LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = (short)29872;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)-69;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
