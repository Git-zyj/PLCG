#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)4646;
unsigned short var_1 = (unsigned short)63519;
unsigned short var_2 = (unsigned short)1849;
signed char var_3 = (signed char)-36;
short var_5 = (short)31988;
short var_7 = (short)-19517;
unsigned int var_10 = 3166256777U;
unsigned char var_11 = (unsigned char)188;
long long int var_13 = -731607179811491207LL;
long long int var_15 = 189107488597046452LL;
int var_16 = -452985556;
short var_17 = (short)-29770;
unsigned long long int var_18 = 17428167933513895888ULL;
int zero = 0;
short var_20 = (short)3829;
unsigned long long int var_21 = 10020902839183872691ULL;
unsigned long long int var_22 = 11737205041218595138ULL;
long long int var_23 = 3366396038274061604LL;
_Bool var_24 = (_Bool)1;
unsigned short var_25 = (unsigned short)16175;
unsigned long long int arr_1 [12] [12] ;
signed char arr_4 [12] ;
unsigned long long int arr_7 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = 18294949265458973793ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (signed char)115;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? 701708362062407429ULL : 16122384942497815941ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
