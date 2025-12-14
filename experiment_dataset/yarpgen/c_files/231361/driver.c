#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4935967791224276738LL;
signed char var_3 = (signed char)71;
int var_4 = 1795697700;
short var_5 = (short)28298;
unsigned long long int var_6 = 15770554820102066394ULL;
unsigned char var_7 = (unsigned char)141;
short var_8 = (short)25504;
int zero = 0;
unsigned short var_10 = (unsigned short)1401;
unsigned short var_11 = (unsigned short)20225;
long long int var_12 = 1687556413725025075LL;
unsigned int var_13 = 2541588768U;
unsigned int var_14 = 253140879U;
signed char var_15 = (signed char)-56;
int arr_1 [15] ;
signed char arr_2 [15] ;
unsigned short arr_3 [15] ;
long long int arr_6 [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = -1686210052;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (signed char)81;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (unsigned short)62917;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = -5572629949749656116LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
