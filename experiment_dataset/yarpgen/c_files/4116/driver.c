#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6236306191164436251ULL;
unsigned short var_2 = (unsigned short)38621;
long long int var_8 = 6078202777731162853LL;
unsigned short var_10 = (unsigned short)24230;
signed char var_13 = (signed char)-85;
signed char var_14 = (signed char)-125;
_Bool var_15 = (_Bool)0;
int zero = 0;
long long int var_16 = -9175969812558710844LL;
unsigned long long int var_17 = 4815665920849841136ULL;
unsigned char var_18 = (unsigned char)27;
long long int arr_0 [21] ;
signed char arr_1 [21] ;
unsigned long long int arr_2 [21] ;
unsigned char arr_3 [21] ;
int arr_4 [21] ;
unsigned short arr_5 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 2025895132706295312LL : -547692683329895876LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (signed char)111 : (signed char)-122;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 9991005824531977758ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned char)11 : (unsigned char)227;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 893650047 : -744418199;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned short)34582 : (unsigned short)11271;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
