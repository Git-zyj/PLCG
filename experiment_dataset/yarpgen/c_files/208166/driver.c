#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -109444489;
unsigned short var_1 = (unsigned short)53475;
int var_3 = -299244967;
int zero = 0;
unsigned int var_10 = 3195588827U;
long long int var_11 = 479396245624410859LL;
unsigned int var_12 = 3300609531U;
short var_13 = (short)-25310;
unsigned long long int arr_2 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = 14846547482444144574ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
