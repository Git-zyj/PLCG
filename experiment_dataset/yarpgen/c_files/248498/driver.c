#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)1871;
unsigned short var_7 = (unsigned short)47048;
long long int var_8 = 9081197796977623389LL;
long long int var_12 = 7920069309965758060LL;
int zero = 0;
int var_14 = 1577154004;
unsigned short var_15 = (unsigned short)16205;
unsigned long long int var_16 = 10815091617389256039ULL;
unsigned int arr_0 [25] ;
short arr_2 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 914873065U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (short)-10969;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
