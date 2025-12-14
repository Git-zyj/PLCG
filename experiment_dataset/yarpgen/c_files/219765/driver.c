#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2329193609U;
signed char var_1 = (signed char)70;
unsigned char var_2 = (unsigned char)115;
unsigned char var_6 = (unsigned char)199;
short var_8 = (short)15714;
unsigned long long int var_9 = 928055535703279493ULL;
int var_11 = -812189363;
unsigned long long int var_15 = 2720061523751857849ULL;
unsigned int var_17 = 3876978775U;
int zero = 0;
unsigned char var_19 = (unsigned char)49;
long long int var_20 = 55994380177542554LL;
unsigned char var_21 = (unsigned char)145;
unsigned char var_22 = (unsigned char)27;
int var_23 = -1759219295;
_Bool var_24 = (_Bool)0;
unsigned int arr_0 [15] [15] ;
unsigned long long int arr_1 [15] [15] ;
unsigned char arr_2 [15] ;
unsigned long long int arr_6 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = 4287453743U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = 7669497838137637930ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (unsigned char)70;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? 12242149760848360067ULL : 10691907617927751652ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
