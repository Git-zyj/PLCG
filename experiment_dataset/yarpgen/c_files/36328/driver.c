#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1164925346;
_Bool var_5 = (_Bool)1;
short var_8 = (short)14716;
int zero = 0;
short var_10 = (short)26663;
unsigned char var_11 = (unsigned char)128;
_Bool var_12 = (_Bool)0;
short var_13 = (short)16660;
short var_14 = (short)764;
unsigned int var_15 = 308207945U;
unsigned long long int arr_2 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 8943703648207234396ULL;
}

void checksum() {
    hash(&seed, var_10);
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
