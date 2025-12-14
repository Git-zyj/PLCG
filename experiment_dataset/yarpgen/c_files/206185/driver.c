#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 14351944855782488228ULL;
unsigned long long int var_4 = 4127351753662417724ULL;
unsigned short var_5 = (unsigned short)17856;
unsigned long long int var_6 = 12843768311516005512ULL;
unsigned long long int var_8 = 9916446809509771173ULL;
unsigned long long int var_9 = 3137532591160848481ULL;
unsigned long long int var_10 = 16957098983705632955ULL;
int zero = 0;
unsigned long long int var_13 = 17671470335088740893ULL;
unsigned short var_14 = (unsigned short)30285;
unsigned long long int arr_0 [13] [13] ;
unsigned long long int arr_1 [13] ;
unsigned long long int arr_2 [13] [13] ;
unsigned long long int arr_3 [13] ;
unsigned long long int arr_4 [13] [13] ;
unsigned short arr_5 [13] ;
unsigned long long int arr_11 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = 11942132439891572982ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 2130469651454621287ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = 4403005671900204170ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = 5370116251497978970ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = 13289382329167606196ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (unsigned short)57468;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_11 [i_0] [i_1] = (i_1 % 2 == 0) ? 4388710343745212424ULL : 13024668749717909604ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
