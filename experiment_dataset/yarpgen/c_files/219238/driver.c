#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 476965385;
signed char var_4 = (signed char)-38;
_Bool var_11 = (_Bool)1;
signed char var_14 = (signed char)125;
short var_15 = (short)19747;
int zero = 0;
unsigned char var_18 = (unsigned char)107;
short var_19 = (short)1897;
signed char var_20 = (signed char)61;
unsigned char var_21 = (unsigned char)69;
unsigned char var_22 = (unsigned char)88;
signed char var_23 = (signed char)-89;
long long int var_24 = -3026206513321671053LL;
long long int var_25 = 6860855577055632664LL;
unsigned char var_26 = (unsigned char)149;
short var_27 = (short)-2118;
unsigned long long int arr_0 [11] ;
long long int arr_1 [11] ;
unsigned long long int arr_3 [24] ;
_Bool arr_11 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 1069776033863098336ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 6483689519180205251LL : 4283659610142906996LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = 16747644413220118964ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_11 [i_0] = (_Bool)1;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
