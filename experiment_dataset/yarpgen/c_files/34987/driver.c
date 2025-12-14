#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1218108284;
short var_3 = (short)7752;
unsigned char var_7 = (unsigned char)90;
unsigned int var_10 = 2344539750U;
int var_14 = -250498283;
int zero = 0;
_Bool var_15 = (_Bool)1;
short var_16 = (short)13024;
unsigned char var_17 = (unsigned char)211;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 4174905452U;
int var_20 = -438775895;
_Bool var_21 = (_Bool)1;
int arr_3 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = -1997625639;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
