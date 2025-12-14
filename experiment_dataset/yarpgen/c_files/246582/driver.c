#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-107;
unsigned long long int var_1 = 15097987069885906883ULL;
long long int var_4 = 659702121258492734LL;
unsigned long long int var_5 = 5061033460139811484ULL;
unsigned long long int var_6 = 18358209957528192480ULL;
short var_9 = (short)6698;
short var_10 = (short)-22155;
int zero = 0;
long long int var_11 = -9192425356398742999LL;
unsigned char var_12 = (unsigned char)97;
unsigned short var_13 = (unsigned short)34094;
signed char var_14 = (signed char)2;
_Bool var_15 = (_Bool)1;
int arr_1 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 772328442;
}

void checksum() {
    hash(&seed, var_11);
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
