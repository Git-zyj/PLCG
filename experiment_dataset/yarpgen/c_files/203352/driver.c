#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)38347;
short var_7 = (short)-15150;
unsigned short var_11 = (unsigned short)2104;
unsigned char var_14 = (unsigned char)151;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned char var_20 = (unsigned char)140;
short var_21 = (short)8269;
unsigned short var_22 = (unsigned short)18239;
long long int arr_1 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = -2176532467164786987LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
