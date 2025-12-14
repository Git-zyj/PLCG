#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4616742033255002833LL;
signed char var_1 = (signed char)-31;
short var_2 = (short)-18799;
unsigned int var_8 = 2812123181U;
long long int var_10 = -3915402553570667709LL;
signed char var_11 = (signed char)-106;
unsigned char var_12 = (unsigned char)238;
unsigned long long int var_16 = 2284786783836719307ULL;
int zero = 0;
int var_18 = 60413884;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 17842950743078441406ULL;
int var_21 = 1573659063;
_Bool var_22 = (_Bool)0;
short var_23 = (short)18627;
_Bool var_24 = (_Bool)0;
_Bool var_25 = (_Bool)1;
unsigned long long int var_26 = 5106098452843253269ULL;
unsigned long long int arr_3 [14] ;
_Bool arr_9 [15] ;
long long int arr_13 [21] [21] ;
int arr_14 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = 3993965781486598003ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_9 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_13 [i_0] [i_1] = 7679959664902011873LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_14 [i_0] [i_1] = 1169683681;
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
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
