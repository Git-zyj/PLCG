#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-25178;
short var_7 = (short)24434;
unsigned short var_9 = (unsigned short)50046;
int var_10 = 662583239;
_Bool var_12 = (_Bool)0;
unsigned int var_14 = 19137553U;
int zero = 0;
int var_19 = -134905842;
signed char var_20 = (signed char)85;
unsigned int var_21 = 977931150U;
unsigned int var_22 = 2305917113U;
signed char var_23 = (signed char)-1;
unsigned short var_24 = (unsigned short)54837;
unsigned int arr_1 [21] ;
signed char arr_2 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 2276618619U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (signed char)28;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
