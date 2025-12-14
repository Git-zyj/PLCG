#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_8 = 1583425877U;
unsigned int var_10 = 3180919770U;
unsigned char var_13 = (unsigned char)167;
int var_17 = 455949599;
unsigned short var_19 = (unsigned short)49481;
int zero = 0;
long long int var_20 = 8869807765287410442LL;
unsigned short var_21 = (unsigned short)62471;
_Bool var_22 = (_Bool)0;
unsigned char arr_3 [25] ;
int arr_4 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (unsigned char)97;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = 494112463;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
