#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-27067;
short var_1 = (short)-19438;
long long int var_3 = -7438059278140324752LL;
unsigned short var_4 = (unsigned short)2233;
unsigned long long int var_8 = 14443440152916178087ULL;
unsigned long long int var_9 = 9215659026661664687ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)170;
short var_13 = (short)-28432;
short var_14 = (short)30623;
unsigned int var_15 = 169435197U;
long long int arr_0 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = -5449084788825114590LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
