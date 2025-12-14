#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)6781;
unsigned long long int var_3 = 12596032186320708133ULL;
_Bool var_8 = (_Bool)1;
unsigned char var_9 = (unsigned char)217;
int var_10 = 27211295;
int var_11 = 183974555;
signed char var_16 = (signed char)76;
int zero = 0;
signed char var_17 = (signed char)-58;
int var_18 = 639863749;
unsigned char var_19 = (unsigned char)147;
signed char var_20 = (signed char)42;
short var_21 = (short)1911;
_Bool var_22 = (_Bool)1;
int var_23 = 1028618544;
unsigned char arr_1 [20] ;
int arr_3 [21] ;
unsigned long long int arr_4 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (unsigned char)214;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = -910432840;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = 14609301937854973484ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
