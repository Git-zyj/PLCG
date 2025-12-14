#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2619525642U;
short var_1 = (short)-29753;
short var_2 = (short)6527;
unsigned int var_3 = 546747448U;
unsigned int var_5 = 1843385124U;
int var_9 = -1390740593;
_Bool var_11 = (_Bool)1;
_Bool var_14 = (_Bool)1;
int var_15 = -1246055371;
int zero = 0;
unsigned short var_18 = (unsigned short)9113;
short var_19 = (short)27957;
int var_20 = 1314424609;
int var_21 = -1902871625;
long long int var_22 = 4455361628998623693LL;
signed char var_23 = (signed char)27;
signed char var_24 = (signed char)11;
long long int var_25 = -3939966069974241102LL;
_Bool arr_1 [17] ;
unsigned char arr_2 [17] ;
long long int arr_3 [17] ;
unsigned long long int arr_4 [17] [17] ;
unsigned char arr_5 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned char)159 : (unsigned char)87;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = -4315209955089537408LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = 10879839696276749762ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned char)171 : (unsigned char)17;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
