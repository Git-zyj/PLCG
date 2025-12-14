#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)20175;
unsigned short var_6 = (unsigned short)6627;
unsigned short var_8 = (unsigned short)40776;
int zero = 0;
unsigned char var_10 = (unsigned char)142;
_Bool var_11 = (_Bool)0;
long long int var_12 = -4606096902133108030LL;
int var_13 = -1594887752;
unsigned short var_14 = (unsigned short)51842;
unsigned int arr_0 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 2642942995U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
