#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -4316661911720799507LL;
long long int var_8 = -1175643806785254795LL;
short var_11 = (short)30061;
short var_12 = (short)30320;
short var_14 = (short)2112;
unsigned short var_16 = (unsigned short)22274;
int zero = 0;
long long int var_20 = 4818604002864833446LL;
short var_21 = (short)-3888;
unsigned short var_22 = (unsigned short)45541;
unsigned int var_23 = 1772439467U;
long long int var_24 = 5934304617985193642LL;
long long int arr_0 [18] ;
signed char arr_3 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 8856903236542629881LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (signed char)23;
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
