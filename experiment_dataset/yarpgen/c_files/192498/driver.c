#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)211;
unsigned char var_4 = (unsigned char)0;
long long int var_6 = 5098045855046234979LL;
unsigned char var_9 = (unsigned char)181;
unsigned int var_12 = 1319994503U;
long long int var_14 = -4397760315394674160LL;
unsigned int var_15 = 2517065732U;
int zero = 0;
unsigned char var_16 = (unsigned char)116;
unsigned char var_17 = (unsigned char)196;
long long int var_18 = 6330994016166732056LL;
unsigned int var_19 = 3253079252U;
unsigned char var_20 = (unsigned char)87;
int arr_0 [15] ;
unsigned int arr_1 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 472500369;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 1204653502U;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
