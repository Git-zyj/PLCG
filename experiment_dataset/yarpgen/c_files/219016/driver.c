#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1894974544U;
long long int var_3 = 3173154779571626925LL;
_Bool var_7 = (_Bool)0;
unsigned int var_9 = 2340450633U;
signed char var_13 = (signed char)35;
int zero = 0;
long long int var_14 = 7723524607155801738LL;
int var_15 = -274854391;
unsigned char var_16 = (unsigned char)205;
unsigned char var_17 = (unsigned char)193;
unsigned char var_18 = (unsigned char)170;
unsigned int var_19 = 2553046924U;
unsigned int arr_10 [21] ;
signed char arr_11 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_10 [i_0] = 359413737U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_11 [i_0] = (signed char)-52;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
