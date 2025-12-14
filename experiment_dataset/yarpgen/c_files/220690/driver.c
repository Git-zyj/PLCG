#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)49433;
signed char var_4 = (signed char)-112;
long long int var_9 = 2970593279972281248LL;
unsigned long long int var_10 = 8864043868766475188ULL;
int zero = 0;
signed char var_14 = (signed char)32;
int var_15 = 2053117752;
unsigned long long int var_16 = 12715388146303829672ULL;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)2;
long long int var_19 = -5632487969223555316LL;
unsigned short var_20 = (unsigned short)45411;
signed char arr_0 [10] [10] ;
unsigned int arr_1 [10] [10] ;
unsigned short arr_4 [10] [10] ;
unsigned char arr_8 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-10;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = 3854558568U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)51185;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_8 [i_0] = (unsigned char)226;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
