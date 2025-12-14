#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2604049643391190236LL;
unsigned int var_2 = 3621085893U;
signed char var_5 = (signed char)63;
int var_7 = -951743301;
_Bool var_9 = (_Bool)0;
unsigned int var_11 = 527755949U;
unsigned long long int var_13 = 5613174844049180920ULL;
int zero = 0;
unsigned char var_15 = (unsigned char)41;
short var_16 = (short)27460;
long long int var_17 = -32761319403850746LL;
unsigned char var_18 = (unsigned char)7;
unsigned short arr_0 [21] ;
unsigned long long int arr_1 [21] ;
unsigned int arr_3 [21] ;
long long int arr_4 [21] ;
unsigned char arr_2 [21] ;
unsigned short arr_6 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (unsigned short)34353;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 13612675798272812509ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = 2221944462U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = -7283892084952021744LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (unsigned char)81;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (unsigned short)10175;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
