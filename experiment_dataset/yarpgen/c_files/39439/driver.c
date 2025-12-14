#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)128;
long long int var_1 = -3785741566648434606LL;
signed char var_5 = (signed char)-123;
long long int var_6 = -8835915585641363734LL;
_Bool var_9 = (_Bool)1;
int zero = 0;
long long int var_14 = 6979039871813249402LL;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)7;
int var_17 = -1438730684;
unsigned int var_18 = 2243756243U;
int arr_0 [16] ;
unsigned long long int arr_4 [16] [16] [16] [16] ;
unsigned char arr_5 [16] ;
long long int arr_6 [16] [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 1225801325;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_4 [i_0] [i_1] [i_2] [i_3] = 4324113768572913588ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (unsigned char)174;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = -466738509176160955LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
