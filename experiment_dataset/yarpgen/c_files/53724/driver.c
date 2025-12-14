#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)53888;
long long int var_10 = -3310055270826773984LL;
unsigned int var_12 = 2799223695U;
unsigned long long int var_15 = 15232714787239218067ULL;
unsigned int var_16 = 1585786557U;
unsigned char var_17 = (unsigned char)60;
int zero = 0;
unsigned char var_20 = (unsigned char)82;
unsigned char var_21 = (unsigned char)175;
int var_22 = 545895873;
_Bool var_23 = (_Bool)0;
short var_24 = (short)13276;
short var_25 = (short)-20131;
long long int arr_3 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = 2126854526016872248LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
