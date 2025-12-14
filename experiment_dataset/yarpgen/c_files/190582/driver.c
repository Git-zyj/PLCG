#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1487835235U;
_Bool var_7 = (_Bool)0;
long long int var_8 = 5986242962794532504LL;
int var_9 = -499771081;
int var_14 = 1885258604;
short var_15 = (short)-20294;
unsigned int var_18 = 1469283431U;
int zero = 0;
unsigned char var_20 = (unsigned char)95;
long long int var_21 = 6758392192006199668LL;
unsigned char var_22 = (unsigned char)175;
_Bool arr_1 [14] ;
unsigned char arr_3 [14] ;
long long int arr_10 [17] ;
unsigned long long int arr_4 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (unsigned char)98;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_10 [i_0] = -5736735689265427624LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = 10301951947962570391ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
