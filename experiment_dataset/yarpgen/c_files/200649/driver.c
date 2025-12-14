#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 7423055537131320904LL;
int var_8 = 1894505760;
_Bool var_9 = (_Bool)0;
short var_10 = (short)9749;
int zero = 0;
long long int var_11 = 5169177893675639361LL;
unsigned int var_12 = 1415945398U;
signed char var_13 = (signed char)-123;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)6594;
short var_16 = (short)11934;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)226;
unsigned long long int arr_3 [21] [21] ;
long long int arr_4 [25] ;
unsigned long long int arr_7 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = 8601576370486439783ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = 7567313519666012192LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = 17989521269613020626ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
