#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2233822246776982139LL;
unsigned short var_3 = (unsigned short)56859;
long long int var_5 = 3688263170322078641LL;
signed char var_8 = (signed char)-127;
unsigned int var_9 = 1814582941U;
int zero = 0;
int var_10 = 1183067922;
unsigned short var_11 = (unsigned short)4317;
unsigned short var_12 = (unsigned short)38307;
int var_13 = -574509908;
unsigned long long int var_14 = 12285337232641164503ULL;
long long int arr_0 [15] ;
long long int arr_1 [15] [15] ;
unsigned int arr_2 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = -5134443493046249815LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = -5679618468493355800LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = 2369190073U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
