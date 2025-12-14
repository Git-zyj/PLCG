#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 276297701U;
signed char var_7 = (signed char)26;
int var_9 = 2031201282;
unsigned int var_12 = 4154657762U;
unsigned char var_13 = (unsigned char)166;
unsigned int var_14 = 99180957U;
unsigned int var_15 = 151193082U;
int zero = 0;
unsigned char var_17 = (unsigned char)245;
unsigned short var_18 = (unsigned short)9741;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)1;
unsigned long long int arr_0 [20] ;
unsigned char arr_1 [20] ;
unsigned int arr_4 [17] ;
short arr_5 [17] ;
short arr_2 [20] ;
short arr_3 [20] ;
long long int arr_6 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = 6675878832244135831ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (unsigned char)78;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = 4179186312U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (short)3208;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (short)7730;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (short)-10762;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = -1174212815623108388LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
