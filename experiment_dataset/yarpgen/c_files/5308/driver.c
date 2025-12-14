#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)173;
unsigned long long int var_5 = 6428079723801730659ULL;
long long int var_6 = 7836024546762594583LL;
int var_12 = -1433492228;
int var_15 = 1069781530;
int zero = 0;
unsigned int var_19 = 842280236U;
unsigned long long int var_20 = 10903271516992265196ULL;
unsigned long long int var_21 = 17869625810955070565ULL;
unsigned long long int var_22 = 13017805549573113214ULL;
signed char var_23 = (signed char)-91;
signed char var_24 = (signed char)-58;
long long int var_25 = 8881773817141241033LL;
signed char var_26 = (signed char)-64;
short arr_0 [20] ;
signed char arr_2 [20] ;
long long int arr_5 [20] [20] ;
long long int arr_7 [20] [20] ;
unsigned int arr_10 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (short)-20084;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (signed char)-96;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? 7585475256530466793LL : -1561213523038753597LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? 8454424903419996911LL : 5210782903727936621LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? 3423649562U : 2560825934U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
