#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1423793724U;
unsigned int var_3 = 1152001065U;
int var_4 = -972095955;
int var_9 = -460318024;
unsigned int var_10 = 3068417402U;
_Bool var_11 = (_Bool)0;
unsigned short var_16 = (unsigned short)22466;
unsigned int var_17 = 289269464U;
int zero = 0;
long long int var_19 = -6418749901932975009LL;
unsigned long long int var_20 = 3362894482306872161ULL;
unsigned long long int var_21 = 18167283018938904187ULL;
int var_22 = -331141798;
int var_23 = -1326018304;
unsigned long long int var_24 = 3851243775079036871ULL;
unsigned int var_25 = 1967341332U;
long long int var_26 = -7747527742408324839LL;
unsigned long long int var_27 = 18236838309975624488ULL;
unsigned long long int var_28 = 268522206213109218ULL;
long long int arr_1 [21] ;
long long int arr_4 [21] ;
_Bool arr_5 [21] ;
long long int arr_7 [18] ;
unsigned int arr_13 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = -6388622910730146081LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = -1554580913100487517LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = -7656000143128069606LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_13 [i_0] = 1859427434U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
