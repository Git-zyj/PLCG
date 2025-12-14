#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)15891;
long long int var_4 = 8423506511249440456LL;
unsigned char var_5 = (unsigned char)188;
unsigned long long int var_6 = 14540448714405682803ULL;
long long int var_8 = -3907233380263720990LL;
signed char var_9 = (signed char)11;
int zero = 0;
int var_15 = 1828787703;
int var_16 = 773258739;
unsigned char var_17 = (unsigned char)173;
_Bool var_18 = (_Bool)1;
unsigned int arr_0 [12] ;
unsigned long long int arr_3 [12] [12] ;
unsigned int arr_4 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 3719663890U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = 3448519390896595750ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = 1586770561U;
}

void checksum() {
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
