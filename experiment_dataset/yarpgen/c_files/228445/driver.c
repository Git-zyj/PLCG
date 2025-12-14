#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1948922736;
long long int var_2 = 6641680569128543862LL;
int var_7 = -1964599191;
unsigned char var_8 = (unsigned char)114;
_Bool var_9 = (_Bool)0;
long long int var_10 = 6234079875186992070LL;
int var_13 = 881762807;
int zero = 0;
unsigned short var_14 = (unsigned short)17101;
unsigned int var_15 = 1326566260U;
short var_16 = (short)32033;
unsigned short var_17 = (unsigned short)13273;
signed char var_18 = (signed char)110;
int var_19 = -851628241;
unsigned long long int arr_4 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = 4234116925252429539ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
