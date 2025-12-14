#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 3752307969006120066LL;
unsigned long long int var_17 = 16324163576370507112ULL;
short var_19 = (short)-643;
int zero = 0;
unsigned int var_20 = 2160533599U;
long long int var_21 = 547409113662341161LL;
unsigned int var_22 = 1303789690U;
_Bool var_23 = (_Bool)1;
unsigned short var_24 = (unsigned short)65284;
long long int arr_1 [19] ;
long long int arr_5 [19] ;
unsigned int arr_6 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = -2940272643059059580LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = -2072002894103006756LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = 3569040311U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
