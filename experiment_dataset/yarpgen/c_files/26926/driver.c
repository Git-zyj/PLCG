#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)58694;
_Bool var_5 = (_Bool)0;
unsigned int var_10 = 2804493907U;
long long int var_13 = 3661885545399578597LL;
int zero = 0;
unsigned int var_15 = 1348590990U;
_Bool var_16 = (_Bool)1;
long long int var_17 = -8376542246851636385LL;
long long int var_18 = 5473940708834080436LL;
unsigned char arr_0 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (unsigned char)57;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
