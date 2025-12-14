#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)188;
int var_2 = 1994309245;
_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)1;
int var_6 = -1905960844;
int var_8 = 301823316;
signed char var_9 = (signed char)-6;
unsigned char var_11 = (unsigned char)5;
short var_13 = (short)-7603;
short var_16 = (short)-9055;
int zero = 0;
unsigned char var_18 = (unsigned char)140;
_Bool var_19 = (_Bool)1;
long long int var_20 = -7870073180583226057LL;
signed char var_21 = (signed char)107;
short var_22 = (short)-18455;
unsigned int var_23 = 3966573457U;
_Bool arr_0 [13] ;
unsigned char arr_1 [13] ;
int arr_2 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (unsigned char)29;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 487204097 : -2086598909;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
