#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6038475393035658484LL;
unsigned int var_2 = 4195821921U;
unsigned short var_3 = (unsigned short)45810;
unsigned int var_4 = 373073880U;
unsigned short var_5 = (unsigned short)13721;
_Bool var_7 = (_Bool)0;
unsigned long long int var_9 = 15552795858130449181ULL;
int var_10 = -1284838943;
unsigned long long int var_11 = 3363837852032715787ULL;
int zero = 0;
int var_12 = 381947071;
signed char var_13 = (signed char)-23;
int var_14 = -119246372;
int var_15 = -189922866;
long long int arr_0 [21] [21] ;
int arr_1 [21] ;
int arr_2 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = -8021875741308852115LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = -800142640;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 1894974380 : 1694634341;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
