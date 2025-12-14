#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 265410968;
_Bool var_1 = (_Bool)0;
_Bool var_5 = (_Bool)1;
long long int var_9 = 711303327038257679LL;
long long int var_10 = -3736416847970998981LL;
long long int var_15 = -1398373770931839080LL;
int zero = 0;
signed char var_18 = (signed char)30;
short var_19 = (short)-14254;
unsigned int var_20 = 1693460130U;
unsigned char var_21 = (unsigned char)8;
unsigned char var_22 = (unsigned char)195;
unsigned char arr_4 [15] [15] ;
long long int arr_5 [15] ;
unsigned long long int arr_3 [11] ;
unsigned int arr_6 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)154;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = -2593344887815025986LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 14688570977461368085ULL : 15618442845065307811ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = 3764366294U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
