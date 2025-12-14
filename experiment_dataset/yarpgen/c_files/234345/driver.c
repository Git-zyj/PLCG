#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1878462259;
unsigned char var_5 = (unsigned char)186;
long long int var_7 = 6947541829785971618LL;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 329772789U;
int zero = 0;
unsigned char var_14 = (unsigned char)99;
int var_15 = 768492447;
unsigned long long int var_16 = 7340890282649659693ULL;
long long int var_17 = 6609305003264673342LL;
unsigned long long int arr_0 [11] [11] ;
unsigned short arr_1 [11] ;
unsigned char arr_2 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = 8881379721318835346ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (unsigned short)314;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (unsigned char)70;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
