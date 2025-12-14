#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4459820910861326620LL;
unsigned short var_1 = (unsigned short)47913;
unsigned short var_3 = (unsigned short)37016;
long long int var_4 = 3655954907225269111LL;
unsigned long long int var_5 = 8304600334252974401ULL;
short var_6 = (short)30716;
int var_11 = -990105670;
int var_15 = -1198054409;
unsigned int var_17 = 2819480928U;
int zero = 0;
int var_18 = 1441360876;
unsigned short var_19 = (unsigned short)22315;
long long int var_20 = -2557735398925940899LL;
long long int var_21 = -298264360968204147LL;
unsigned short var_22 = (unsigned short)49104;
short var_23 = (short)-13488;
unsigned short var_24 = (unsigned short)62791;
short arr_0 [24] ;
long long int arr_1 [24] ;
signed char arr_5 [20] ;
unsigned int arr_4 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (short)-4583;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = -7356624914305533365LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = (signed char)29;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = 1994968962U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
