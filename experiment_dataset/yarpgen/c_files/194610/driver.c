#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1776419822;
unsigned char var_3 = (unsigned char)129;
unsigned int var_4 = 2016931262U;
unsigned long long int var_10 = 418204902202841596ULL;
_Bool var_12 = (_Bool)1;
short var_14 = (short)9020;
int zero = 0;
int var_18 = -1416795082;
unsigned long long int var_19 = 10652355841600571613ULL;
int var_20 = -1394727855;
unsigned long long int var_21 = 16471189009474666587ULL;
unsigned char var_22 = (unsigned char)228;
signed char var_23 = (signed char)59;
int arr_1 [17] ;
unsigned char arr_3 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 666073523;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (unsigned char)42;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
