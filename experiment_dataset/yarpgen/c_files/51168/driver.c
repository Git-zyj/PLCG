#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 2138788599765490678LL;
unsigned int var_9 = 858935034U;
unsigned char var_10 = (unsigned char)225;
unsigned int var_13 = 550946334U;
unsigned int var_16 = 1718641770U;
unsigned int var_18 = 3659134972U;
long long int var_19 = 1193101729347044798LL;
int zero = 0;
unsigned long long int var_20 = 12711573862191305142ULL;
short var_21 = (short)-25677;
unsigned char var_22 = (unsigned char)141;
unsigned char var_23 = (unsigned char)201;
signed char var_24 = (signed char)69;
unsigned int var_25 = 1180340348U;
_Bool arr_0 [12] [12] ;
unsigned int arr_1 [12] ;
unsigned int arr_2 [12] ;
unsigned int arr_4 [24] ;
long long int arr_5 [24] [24] ;
unsigned int arr_7 [24] ;
long long int arr_3 [12] ;
unsigned char arr_8 [24] ;
unsigned char arr_9 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 2904474919U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 1323246646U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = 2114963545U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? -7986794766968786669LL : -9160544417113205263LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = 3736838449U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = 6187096401298335101LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (unsigned char)40 : (unsigned char)30;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (unsigned char)109 : (unsigned char)243;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
