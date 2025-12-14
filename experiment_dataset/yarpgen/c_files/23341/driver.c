#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)39613;
unsigned long long int var_3 = 16184055611546935928ULL;
short var_4 = (short)-10146;
unsigned long long int var_6 = 6177711814514106370ULL;
short var_7 = (short)-21168;
unsigned int var_8 = 2728480823U;
unsigned int var_9 = 2194396187U;
int zero = 0;
unsigned int var_11 = 601400668U;
_Bool var_12 = (_Bool)1;
long long int var_13 = -5999349455447174654LL;
long long int var_14 = 3909476303885200897LL;
short arr_1 [11] [11] ;
_Bool arr_4 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-670;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
