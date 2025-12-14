#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -32081995087226449LL;
int var_1 = 1265474984;
unsigned char var_3 = (unsigned char)46;
_Bool var_4 = (_Bool)1;
unsigned long long int var_7 = 4042044731499185946ULL;
signed char var_9 = (signed char)-63;
unsigned long long int var_10 = 7290246587291793580ULL;
unsigned char var_11 = (unsigned char)214;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)13687;
unsigned char var_14 = (unsigned char)140;
unsigned long long int var_15 = 17161876142096705284ULL;
unsigned int var_16 = 3727896945U;
unsigned int var_17 = 2595822936U;
long long int var_18 = 4921135239793439161LL;
unsigned char var_19 = (unsigned char)159;
unsigned short arr_0 [11] ;
unsigned int arr_1 [11] ;
long long int arr_4 [11] [11] [11] ;
unsigned short arr_5 [11] ;
unsigned char arr_11 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (unsigned short)28908;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 554933792U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = -2470169140140920619LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (unsigned short)40690;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (unsigned char)209;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
