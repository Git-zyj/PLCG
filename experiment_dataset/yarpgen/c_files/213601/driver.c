#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 7131468062686025902LL;
long long int var_3 = 3820247323179142649LL;
unsigned long long int var_5 = 7626352119348230101ULL;
unsigned long long int var_6 = 10713594049073192043ULL;
int var_9 = -1001891070;
unsigned int var_10 = 2799859092U;
short var_11 = (short)10548;
int zero = 0;
unsigned short var_12 = (unsigned short)23593;
unsigned short var_13 = (unsigned short)52560;
unsigned long long int var_14 = 10135845834954354202ULL;
unsigned long long int arr_0 [20] ;
int arr_3 [20] ;
unsigned long long int arr_6 [20] ;
long long int arr_8 [20] [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = 12320667109107725196ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = -1725648549;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = 15833969699619592096ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = 3558833279338061436LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    hash(&seed, arr_8 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
