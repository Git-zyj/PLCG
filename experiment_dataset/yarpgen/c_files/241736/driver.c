#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6334153688774928957LL;
unsigned char var_3 = (unsigned char)218;
unsigned int var_11 = 1581251378U;
unsigned char var_12 = (unsigned char)2;
long long int var_14 = 2883126681541821809LL;
int zero = 0;
long long int var_19 = 4376356594993440483LL;
int var_20 = 2056573636;
_Bool var_21 = (_Bool)0;
short arr_1 [18] [18] ;
unsigned long long int arr_2 [18] ;
unsigned int arr_3 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = (short)29506;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 6221878200133325428ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = 2122572877U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
